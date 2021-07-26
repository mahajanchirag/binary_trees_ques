class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        
        stack<TreeNode*> stk;
        TreeNode* curr=root;
        
        while(curr!=NULL || !stk.empty())
        {
            while(curr!=NULL)
            {
                stk.push(curr);
                curr=curr->left;
            }
            
            k--;
            if(k==0)
            {
                return stk.top()->val;
            }
            
            curr=stk.top()->right;
            stk.pop();
            
        }
        return -1;
    }
};
