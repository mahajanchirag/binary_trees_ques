class Solution {
public:
    
    Node* helper(Node* curr)
    {
        Node* temp=curr->next;
        while(temp!=NULL)
        {
            if(temp->left)
            {
                return curr->next->left;
            }
            
            else if(temp->right)
            {
                return curr->next->right;
            }
            
            temp=temp->next;
            
        }
        
        return NULL;
    }
    
    
    
    Node* connect(Node* root) {
        
        if(root==NULL)
        {
            return root;
        }
        
        root->next=NULL;
        
        Node* temp=root;
        
        while(temp!=NULL)
        {
            Node* curr=temp;
            while(curr!=NULL)
            {
                if(curr->left!=NULL)
                {
                    if(curr->right!=NULL)
                    {
                        curr->left->next=curr->right;
                    }
                    
                    else
                    {
                        curr->left->next=helper(curr);
                    }
                }
                
                if(curr->right)
                {
                    curr->right->next=helper(curr);
                }
                
                curr=curr->next;
                    
            }
            if(temp->left)
            {
                temp=temp->left;
            }
            else if(temp->right)
            {
                temp=temp->right;
            }
            
            else
            {
                temp=helper(temp);
            }
            
            
            
        }
        
        return root;
    }
};
