class check{
public:
    int members;            //Done by me
    bool ans;
    int mi;
    int ma;
};

check *helper(Node *root)
{
    if(root==NULL)
    {
        check *p=new check();
        p->members=0;
        p->ans=true;
        p->mi=INT_MAX;;
        p->ma=INT_MIN;
        
        return p;
    }
    
    check *left=new check();
    check *right=new check();
    check *output=new check();
    left=helper(root->left);
    right=helper(root->right);
    
    if(right->ans==false || left->ans==false || (root->data<=left->ma || root->data>=right->mi))
    {
        output->members=max(right->members,left->members);
        output->ans=false;
        output->mi=INT_MIN;;
        output->ma=INT_MAX;
        
        return output;
    }
    
    output->members=1+right->members+left->members;
    output->ans=true;
    output->mi=min(root->data,left->mi);
    output->ma=max(root->data,right->ma);
    
    return output;
    
    
    
    
}


int largestBst(Node *root)
{
	//Your code here
	check *k=new check();
	k=helper(root);
	return k->members;
}
