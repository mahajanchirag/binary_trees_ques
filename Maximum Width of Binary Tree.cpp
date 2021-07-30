class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        
        queue<pair<TreeNode*,int>> q;
        q.push({root,0});
        int ans=1;
        int start,end;
        while(!q.empty())
        {
            int size=q.size();
            for(int i=1;i<=size;i++)
            {
                pair<TreeNode*,int> curr=q.front();
                q.pop();
                if(i==1)
                {
                    start=curr.second;
                }
                
                if(i==size)
                {
                    end=curr.second;
                }
                
                if(curr.first->left)
                {
                    q.push({curr.first->left,2*(curr.second-start)+1});
                }
                if(curr.first->right)
                {
                    q.push({curr.first->right,2*(curr.second-start)+2});
                }
                
            }
            ans=max(ans,end-start+1);
        }
        return ans;
    }
};
