vector <int> bottomView(Node *root)
{
   // Your Code Here
   vector<int> v;
   if(root==NULL)
   {
       return v;
   }
   map<int,int> m;
   queue<pair<Node*,int>> q;
   q.push(make_pair(root,0));
   while(!q.empty())
   {
       pair<Node*,int> curr=q.front();
       q.pop();
       
       m[curr.second]=curr.first->data;
       
       if(curr.first->left!=NULL)
       {
           q.push(make_pair(curr.first->left,curr.second-1));
       }
       if(curr.first->right)
            q.push(make_pair(curr.first->right,curr.second+1));
   }
   
   auto p=m.begin();
    while(p!=m.end())
    {
        v.push_back(p->second);
        p++;
    }
    
    return v;
}
