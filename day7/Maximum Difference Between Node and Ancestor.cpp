class Solution {
public:
    int helper(TreeNode* root, int cmax,int cmin)
    {
        if(root==NULL)
        {
            return (cmax-cmin);
        }
        cmax=max(root->val,cmax);
        cmin=min(root->val,cmin);
        int l=helper(root->left,cmax,cmin);
        int r=helper(root->right,cmax,cmin);
        return max(l,r);
    }
    int maxAncestorDiff(TreeNode* root) 
    {
        if(root==NULL)
        {
            return 0;
        }
        return helper(root,root->val,root->val);
    }
};