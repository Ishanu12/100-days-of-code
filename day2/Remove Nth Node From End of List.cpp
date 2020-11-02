class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        if(head==NULL)
        {
            return head;
        }
        ListNode* temp1=head;
        ListNode* temp2=head;
        ListNode* temp3=head;
        for(int i=0;i<n-1;i++)
        {
            temp3=temp3->next;
        }
        while(temp3->next!=NULL)
        {
            temp1=temp2;
            temp2=temp2->next;
            temp3=temp3->next;
        }
        if(temp2==head)
        {
            head=temp2->next;
        }
        else
        {
            temp1->next=temp2->next;
        }
        return head;
    }
};