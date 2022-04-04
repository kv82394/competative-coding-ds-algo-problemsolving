/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
struct Node {
    Node* left;
    Node* right;
    int data;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
Node* sortedArrayToBST(int* arr,int start,int end){
    if(start>end)return NULL;
    int mid = (start + end)/2;
    Node* root = new Node(arr[mid]);
    root->left = sortedArrayToBST(arr,start,mid-1);
    root->right = sortedArrayToBST(arr,mid+1,end);
    return root;
}
void preorder(Node* root){
    if (root==NULL)return;
    
    preorder(root->left);
    cout << root->data<<" ";
    preorder(root->right);
}
int main()
{
   int arr[] = {1,2,3,4,5};
   Node* root = sortedArrayToBST(arr,0,4);
   preorder(root);
    

    return 0;
}
