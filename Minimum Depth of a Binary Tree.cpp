class Solution{
  public:
    /*You are required to complete this method*/
    int minDepth(Node *node) {
        // Your code here
        if(node==NULL)
return 0;

if(node->left==NULL && node->right==NULL)
return 1;

if(node->left&&node->right)

{
return 1+min(minDepth(node->left),minDepth(node->right)) ;
}

else if(node->left)
{
return 1+minDepth(node->left);
}
else
return 1+minDepth(node->right);
    }
};
