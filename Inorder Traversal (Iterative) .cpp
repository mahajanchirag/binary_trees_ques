class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
    stack<TreeNode*> s;
    if(root==NULL)
    {
        return ans;
    }
    
    TreeNode* curr=root;
    while(curr!=NULL || !s.empty())
    {
        while(curr!=NULL)
        {
            s.push(curr);
            curr=curr->left;
        }
        
        ans.push_back(s.top()->val);
        curr=s.top()->right;
        s.pop();
    }
    
    return ans;
    }
};
