class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* p=list1;
         ListNode* q=list1;
        while(p!=NULL && q!=NULL)
        {
           q=p;
            p->next=q;
        }
    }
};