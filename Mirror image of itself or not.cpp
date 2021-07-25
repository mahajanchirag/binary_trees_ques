bool isMirror(struct Node* root1,struct Node* root2)
{
    if(root1==NULL && root2==NULL)
    {
        return true;
    }
    
    if(root1==NULL || root2==NULL)https://auth.geeksforgeeks.org/user/user_2inv1/practice/
    {
        return false;
    }
    
    if(root1->data==root2->data)
    {
        return isMirror(root1->left,root2->right)&&isMirror(root1->right,root2->left);
    }
    
    else
    {
        return false;
    }
    
    
}

bool isSymmetric(struct Node* root)
{
	// Code here
	return isMirror(root,root);
}
