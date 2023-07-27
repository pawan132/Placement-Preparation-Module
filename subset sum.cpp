void join(Node* &head, Node* temp) {
    Node* a = head;
    Node* b = temp;
    Node* tail = head;
    
    if (a->data <= b->data) {
        tail = a;
        a = a->bottom;
    } else {
        head = b;
        tail = b;
        b = b->bottom;
    }

    while (a != NULL && b != NULL) {
        if (a->data <= b->data) {
            tail->bottom = a;
            tail = a;
            a = a->bottom;
        } else {
            tail->bottom = b;
            tail = b;
            b = b->bottom;
        }
    }

    if (a == NULL) {
        tail->bottom = b;
    }

    if (b == NULL) {
        tail->bottom = a;
    }
}


Node *flatten(Node *root)
{   
    Node*head=root;
    if(head==NULL || head->next==NULL) {
        return head;
    }
    Node*temp=root->next;
    while(temp!=NULL ) {
        join(head,temp);
        temp=temp->next;
    }
    return head;
}