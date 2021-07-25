class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
    if(root==NULL)
    {
        return ans;
    }
    
    stack<TreeNode*> s;
    s.push(root);
    stack<int> out;
    
    while(!s.empty())
    {
        TreeNode* temp=s.top();
        s.pop();
        out.push(temp->val);
        
        if(temp->left)
        {
            s.push(temp->left);
        }
        
        if(temp->right)
        {
            s.push(temp->right);
        }
        
    }
    
    while (!out.empty())
    {
        ans.push_back(out.top());
        out.pop();
    }
    return ans;
    }
};
