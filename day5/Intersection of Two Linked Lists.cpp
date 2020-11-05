class Solution {
public:
    int length(ListNode * head)
    {
        int len=0;
        while(head)
        {
            len+=1;
            head=head->next;
        }
        return len;
    }
    ListNode *helper(int d, ListNode *headA, ListNode *headB)
    {
        while(d--)
        {
            headA=headA->next;
        }
        while(headA && headB)
        {
            if(headA==headB)
            {
                return headA;
            }
            headA=headA->next;
            headB=headB->next;
        }
        return NULL;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        if(headA==NULL || headB==NULL)
        {
            return NULL;
        }
        ListNode* temp1=NULL;
        int l1=length(headA);
        int l2=length(headB);
        if(l1>l2)
        {
            temp1=helper(l1-l2,headA,headB);
        }
        else
        {
            temp1=helper(l2-l1,headB,headA);
        }
        return temp1;
    }
};