class Solution {
public:
    bool isPalindrome(ListNode* head) 
    {
        string s="";
        ListNode*temp=head;
        while(temp!=NULL)
        {
            s+=temp->val;
            temp=temp->next;
        }
        string s1;
        s1=s;
        reverse(s1.begin(),s1.end());
        return (s==s1);
    }
};