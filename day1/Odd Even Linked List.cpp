class Solution {
public:
    ListNode* oddEvenList(ListNode* head)
    {
        if (head == NULL || head->next == NULL){
            return head;
        }
        ListNode* ehead=head;
        ListNode* etail=head;
        ListNode* otail=head->next;
        ListNode* ohead=head->next;
        ListNode* ptr=head->next->next;
        int pos=2;
        while(ptr!=NULL)
        {
            if(pos%2==0)
            {
                etail->next=ptr;
                etail=ptr;
            }
            else
            {
                otail->next=ptr;
                otail=ptr;
            }
            pos++;
            ptr=ptr->next;
        }

        etail->next=ohead;
        otail->next=NULL;
        return ehead;
    }
};