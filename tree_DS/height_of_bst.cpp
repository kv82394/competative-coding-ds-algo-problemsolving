    int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
        int x=0,y=0;
        x = maxDepth(root->left)  +1;
        y = maxDepth(root->right) +1; 
        return max(x,y);
    }
