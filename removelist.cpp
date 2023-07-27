class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* p=head;
        int c=0;
        while(p!=NULL){
            p=p->next;
            c++;
        
        }
         
        int m=c-(n);
        if(m==0) {
            return head->next;
        }
        ListNode* q=head;
        int cn=1;
        while(cn<=m-1){
            q=q->next;
            cn++;
        }
        ListNode* r=q->next;
        q->next=r->next;
        return head;
    }
};