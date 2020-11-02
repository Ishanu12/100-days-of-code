class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) 
    {
        vector<int> v;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
        stack<int> s;
        vector<int> ans(v.size(),0);
        for(int i=0;i<v.size();i++)
        {
            while(!s.empty() && v[s.top()]<v[i])
            {
                ans[s.top()]=v[i];
                s.pop();
            }
            s.push(i);
        }
        return ans;
    }
};