    int Depth(TreeNode* root){
           if(root==NULL) return 1;
        
        int l=Depth(root->left);
        int r=Depth(root->right);
        return max(l,r)+1;
    }
    int maxDepth(TreeNode* root) {
       int ans=Depth(root);
        return ans-1;
    }
};