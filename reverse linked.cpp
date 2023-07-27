class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL) return NULL;
        ListNode* p=head;
        vector<int> v;
        while(p!=NULL)
        {
            v.push_back(p->val);
            p=p->next;
            
        }
        int n=v.size();
        ListNode* q=head;
         
        for(int i=0;i<n;i++)
        {
           q->val=v[n-i-1]; 
            q=q->next;
            
        }
         
        return head;
    }
};