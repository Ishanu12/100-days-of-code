class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) 
    {
        ListNode* ptr=head;
        ListNode* q;
        if(head==NULL)
        {
            return NULL;
        }
        else
        {
            q=head->next;
        }
        while(q!=NULL)
        {
            if(ptr->val != q->val)
            {
                ptr=q;
                q=q->next;
            }
            else
            {
                ptr->next=q->next;
                delete q;
                q=ptr->next;
            }
        }
        return head;
    }
};