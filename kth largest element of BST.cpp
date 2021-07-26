class Solution
{
    public:
    void helper(Node *root,int k,int &count,int &res)
    {
        if(!root)
        {
            return;
        }
        helper(root->right,k,count,res);
        count++;
        if(count==k)
        {
            res=root->data;
            return;
        }
        helper(root->left,k,count,res);
        
    }
    
    int kthLargest(Node *root, int K)
    {
        //Your code here
        if(!root)
        {
            return -1;
        }
        
        int count=0;
        int res=-1;
        helper(root,K,count,res);
        return res;
    }
};
