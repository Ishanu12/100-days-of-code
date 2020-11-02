class Solution {
public:
    ListNode* insertionSortList(ListNode* head) 
    {
        vector<int> v;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
        int n=v.size();
        int key,j;
        for(int i=0;i<n;i++)
        {
            key=v[i];
            j=i-1;
            while(j>=0 && v[j]>key)
            {
                v[j+1]=v[j];
                j=j-1;
            }
            v[j+1]=key;
        }
        temp=head;
        for(int i=0;i<n;i++)
        {
            temp->val=v[i];
            temp=temp->next;
        }
        return head;
    }
};