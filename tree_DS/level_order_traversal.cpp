    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL)return ans;
        vector<TreeNode*> vec;
        vec.push_back(root);
        while(vec.size()!=0){
            vector<TreeNode*> vec1;
            vector<int> temp;
            for (int i = 0 ;i<vec.size();i++){
                temp.push_back(vec[i]->val);
                if(vec[i]->left!=NULL)vec1.push_back(vec[i]->left);
                if(vec[i]->right!=NULL)vec1.push_back(vec[i]->right);
            }
            ans.push_back(temp);
            vec = vec1;
            
        }
        return ans;
    }
