class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        
        if(root==NULL)
        {
            return root;
        }
        
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* curr=q.front();
            q.pop();
            TreeNode* temp;
            
            if(curr->right!=NULL)
            {
                q.push(curr->right);
            }
            
            if(curr->left!=NULL)
            {
                q.push(curr->left);
            }
            
            temp=curr->left;
            curr->left=curr->right;
            curr->right=temp;
            
            
        }
        
        return root;
    }
};
