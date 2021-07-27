class Solution{
  public:
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    vector<int> v;
    void inserting(Node *root)
    {
        if(root==NULL)
        {
            return;
        }
        
        
        inserting(root->left);
        v.push_back(root->data);
        inserting(root->right);
  
        
    }
    
    void change(Node *root,int &i)
    {
        if(root==NULL)
        {
            return;
        }
        
        change(root->left,i);
        
        root->data=v[i++];
        

        change(root->right,i);
        
        
    }
    
    Node *binaryTreeToBST (Node *root)
    {
        //Your code goes here
        
        inserting(root);
        
        sort(v.begin(),v.end());
        int i=0;
        change(root,i);
        v.clear();
        return root;
        
        
        
    }
};
