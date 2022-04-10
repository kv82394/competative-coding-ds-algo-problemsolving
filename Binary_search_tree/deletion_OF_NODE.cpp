/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int find_max(TreeNode* root){
        int max = root->val;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* temp= q.front();
            q.pop();
            if (temp->val>max)max = temp->val;
            if (temp->left){q.push(temp->left);}
            if (temp->right){q.push(temp->right);}
            
        }
        return max;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (root==NULL)return NULL;
        if (root->val>key){
            root->left = deleteNode(root->left,key);
        }
        else if(root->val<key){
            root->right = deleteNode(root->right,key);
        }else{
            if (root->left==NULL && root->right==NULL)
                return NULL;
            if (root->left!=NULL && root->right==NULL)
                return root->left;
            if(root->left==NULL && root->right!=NULL)
                return root->right;
            int max_in_left_subtree = find_max(root->left);
            root->val = max_in_left_subtree;
             root->left = deleteNode(root->left,max_in_left_subtree);
        }
        return root;
    }
};
