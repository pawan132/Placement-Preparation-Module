    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL) return NULL;
        
        if(root->val==val) return root;
        
        else if(root->val>val)
        {
            TreeNode* l=searchBST(root->left,val);
            return l;
        }
        else
        {
            TreeNode* r=searchBST(root->right,val); 
            return r;
        }
    }