<<<<<<< HEAD
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
    {
        if(l1==NULL && l2==NULL)
        {
            return NULL;
        }
        if(l1==NULL)
        {
            return l2;
        }
        if(l2==NULL)
        {
            return l1;
        }
        ListNode* ft=NULL;
        ListNode* fh=NULL;
        if(l1->val<=l2->val)
        {
            fh=l1;
            ft=l1;
            l1=l1->next;
        }
        else
        {
            fh=l2;
            ft=l2;
            l2=l2->next;
        }
        while(l1!=NULL && l2!=NULL)
        {
            if(l1->val<=l2->val)
            {
                ft->next=l1;
                l1=l1->next;
            }
            else
            {
                ft->next=l2;
                l2=l2->next;
            }
            ft=ft->next;
        }
        if(l1!=NULL)
        {
            ft->next=l1;
        }
        if(l2!=NULL)
        {
            ft->next=l2;
        }
        return fh;
    }
=======
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
    {
        if(l1==NULL && l2==NULL)
        {
            return NULL;
        }
        if(l1==NULL)
        {
            return l2;
        }
        if(l2==NULL)
        {
            return l1;
        }
        ListNode* ft=NULL;
        ListNode* fh=NULL;
        if(l1->val<=l2->val)
        {
            fh=l1;
            ft=l1;
            l1=l1->next;
        }
        else
        {
            fh=l2;
            ft=l2;
            l2=l2->next;
        }
        while(l1!=NULL && l2!=NULL)
        {
            if(l1->val<=l2->val)
            {
                ft->next=l1;
                l1=l1->next;
            }
            else
            {
                ft->next=l2;
                l2=l2->next;
            }
            ft=ft->next;
        }
        if(l1!=NULL)
        {
            ft->next=l1;
        }
        if(l2!=NULL)
        {
            ft->next=l2;
        }
        return fh;
    }
>>>>>>> 09f0469c78ab56ded2d10c33f44a94cb5aac11ad
};