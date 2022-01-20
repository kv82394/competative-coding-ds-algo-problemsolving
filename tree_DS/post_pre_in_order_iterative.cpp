#include <bits/stdc++.h>

using namespace std;

struct Node{
    Node *left,*right;
    int data;
};
struct Node* createNode(int data){
    Node *temp = new Node();
    temp->right = NULL;
    temp->left = NULL;
    temp->data = data;
    return temp;
}
void InOrderTraversal(Node *root){
    
    if (root==NULL)return;
    InOrderTraversal(root->left);
    cout << root->data<<" ";
    InOrderTraversal(root->right);
}
void preOrderTraversal(Node *root){
    if (root==NULL)return;
    cout << root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);

}
void postOrderTraversal(Node *root){
    if (root==NULL)return;
    
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data<<" ";
}
int main()
{
    Node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    );
    cout << endl;cout << "InOrder ";
    InOrderTraversal(root
    cout << "PostOrder ";
    postOrderTraversal(root);
    cout << endl;
    cout << "preOrder ";
    preOrderTraversal(root);
    cout << endl;
    
    return 0;
}
