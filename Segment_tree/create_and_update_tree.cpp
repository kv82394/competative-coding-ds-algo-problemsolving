#include <iostream>

using namespace std;
void update_tree(int* arr,int* tree,int start,int end,int treenode,int index,int val){
    if (start==end){
        tree[treenode] = val;
        return;
    }
    int mid = (start+end)/2;
    if (index<=mid){
        update_tree(arr,tree,start,mid,2*treenode,index,val);
    }
    else{
      update_tree(arr,tree,mid+1,end,2*treenode+1,index,val);  
    }
    tree[treenode] = tree[2*treenode] + tree[2*treenode+1];
    return ;
}
void bulid_tree(int* arr,int* tree,int start,int end,int treenode){
    if (start==end){
        tree[treenode] = arr[start];
        return;
    }
    int mid = (start+end)/2;
    bulid_tree(arr,tree,start,mid,2*treenode);
    bulid_tree(arr,tree,mid+1,end,2*treenode+1);
    tree[treenode] = tree[2*treenode] + tree[2*treenode+1];
    return ;
    
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int* tree = new int[18];
    bulid_tree(arr,tree,0,8,1);
    update_tree(arr,tree,0,8,1,5,3);
    for (int i = 1 ;i< 18;i++){
        cout << i<<" :"<<tree[i]<<endl;;
    }

    return 0;
}
