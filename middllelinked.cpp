class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head==NULL) return NULL;
         ListNode* p=head;
         ListNode* q=head;
        while(q!=NULL && q->next!=NULL)
        {
            p=p->next;
            q=q->next->next;
        }
        return p;
    }
};