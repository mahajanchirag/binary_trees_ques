void topView(Node * root) {

        if(root==NULL)
        {
            return;
        }
        queue<pair<Node *,int>> q;
        map<int,int> mp;
        q.push({root,0});
        while(!q.empty())
        {
            pair<Node *,int> curr=q.front();
            q.pop();
            Node* temp=curr.first;
            int col=curr.second;
            if(mp.find(col)==mp.end())
            {
                mp[col]=temp->data;
            }
            
            if(temp->left)
            {
                q.push({temp->left,col-1});
            }
            
            if(temp->right)
            {
                q.push({temp->right,col+1});
            }
        }
        
        for(auto it:mp)
        {
            cout<<it.second<<" ";
        }
        
        cout<<endl;
        
    }
