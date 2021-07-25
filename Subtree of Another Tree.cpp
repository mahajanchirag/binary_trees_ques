class Solution {
public:
    bool check(TreeNode* root, TreeNode* subRoot)
    {
        if(root==NULL && subRoot==NULL)
        {
            return true;
        }
        
        if(root==NULL || subRoot==NULL || root->val!=subRoot->val)
        {
            return false;
        }
        
        return check(root->left,subRoot->left)&&check(root->right,subRoot->right);
        
        
        
    }
    
    
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        
        if(root==NULL)
        {
            return false;
        }
        
        if(check(root,subRoot)==true)
        {
            return true;
        }
        
        return isSubtree(root->left,subRoot)||isSubtree(root->right,subRoot);
        
    }
};
