class Solution {
public:
    int maxPower(string s) 
    {
        int max = 1, count=1;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]==s[i+1])
            {
                count+=1;
                if(count > max){
                    max = count;
                }
            }
            else
            {
                count=1;
            }
        }
        return max;
    }
};