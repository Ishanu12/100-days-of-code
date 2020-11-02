class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        vector<int> v1,v2;
        ListNode* temp=l1;
        while(temp!=NULL)
        {
            v1.push_back(temp->val);
            temp=temp->next;
        }
        ListNode* temp1=l2;
        while(temp1!=NULL)
        {
            v2.push_back(temp1->val);
            temp1=temp1->next;
        }
        int n1=v1.size();
        int n2=v2.size();
        int i=n1-1;
        int j=n2-1;
        int k=max(n1,n2);
        vector<int> output(k+1, 0);
        int carry=0;
        while(i>=0 && j>=0)
        {
            int sum=v1[i]+v2[j]+carry;
            output[k]=sum%10;
            carry=sum/10;
            k-=1;
            j-=1;
            i-=1;
        }
        while(i>=0)
        {
            int sum=v1[i]+carry;
            output[k]=sum%10;
            carry=sum/10;
            i-=1;
            k-=1;
        }
        while(j>=0)
        {
            int sum=v2[j]+carry;
            output[k]=sum%10;
            carry=sum/10;
            k-=1;
            j-=1;
        }
        output[0]=carry;
        
        ListNode* headAns = NULL;
        ListNode* ptr = NULL;
        for(int i=0;i<output.size();i++)
        {
            if(i == 0 && output[i]==0)
            {
                continue;
            }
            cout<<output[i];
            ListNode *newnode = new ListNode(output[i]);
            // cout<<newnode->val;
            if(headAns == NULL){
                headAns = newnode;
                ptr = newnode;
            }
            else{
                ptr->next = newnode;
                ptr = newnode;
            }
        }
        return headAns;
    }
};