class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        
        vector<int> ans;
        if(root==NULL)
        {
            return ans;
        }
        
        stack<TreeNode*> stk;
        
        TreeNode* curr=root;
        while(curr!=NULL || !stk.empty())
        {
            while(curr!=NULL)
            {
                ans.push_back(curr->val);
                stk.push(curr);
                curr=curr->left;
            }
            
            curr=stk.top();
            stk.pop();
            curr=curr->right;
            
        }
        
        return ans;
    }
};
