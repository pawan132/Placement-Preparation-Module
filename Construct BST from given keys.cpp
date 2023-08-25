     TreeNode* bst(vector<int> v,int l,int r)
     {
         if(l>r) return NULL;
         int mid=(l+r)/2;
          TreeNode* node=new  TreeNode(v[mid]);
         node->left=bst(v,l,mid-1);
         node->right=bst(v,mid+1,r);
         return node;
     }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size()==0) return NULL;
        return bst(nums,0,nums.size()-1);
    }