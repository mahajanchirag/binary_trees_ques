class Solution {
public:
    TreeNode* helper(ListNode* head,ListNode* tail)
    {
        if(head==tail)
        {
            return NULL;
        }
        
        if(head->next==tail)
        {
            TreeNode *root = new TreeNode( head->val );
    		return root;
        }
        
        ListNode* slow=head,*fast=head;
        
        while(fast!=tail && fast->next!=tail)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        TreeNode *root = new TreeNode( slow->val );
    	root->left = helper( head, slow );
    	root->right = helper( slow->next, tail );
    	return root;
        
        
    }
    
    
    TreeNode* sortedListToBST(ListNode* head) {
       
               return helper(head,NULL);
    }
};
