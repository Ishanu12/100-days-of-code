#include<cmath>
class Solution {
public:
    int getDecimalValue(ListNode* head) 
    {
        // if(head==NULL)
        // {
        //     return 0;
        // }
        // vector<int> v;
        // ListNode* temp=head;
        // while(temp!=NULL)
        // {
        //     int c=temp->val;
        //     v.push_back(c);
        //     temp=temp->next;
        // }
        // reverse(v.begin(),v.end());
        // int n=v.size();
        // int sum=0;
        // for(int i=0;i<n;i++)
        // {
        //     int x=i;
        //     int power=1;
        //     while(x!=0)
        //     {
        //         power*=2;
        //         --x;
        //     }
        //     sum+=power*v[i];
        // }
        // return sum;
        if(head==NULL)
        {
            return 0;
        }
        ListNode* temp=head;
        int r=0;
        while(temp!=NULL)
        {
            int c=temp->val;
            r=r<<1;
            r+=c;
            temp=temp->next;
        }
        return r;
    }
};