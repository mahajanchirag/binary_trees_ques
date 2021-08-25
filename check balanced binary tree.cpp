class Solution {
public:
    
    int findHeight(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        
        int lh=findHeight(root->left);
        int rh=findHeight(root->right);
        
        if(lh==-1 || rh==-1 || abs(lh-rh)>1)
        {
            return -1;
        }
        
        return max(lh,rh)+1;
        
        
    }
    
    bool isBalanced(TreeNode* root) {
        
        if(findHeight(root)==-1)
        {
            return false;
        }
        
        return true;
    }
};
