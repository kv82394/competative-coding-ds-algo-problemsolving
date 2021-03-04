#include<bits/stdc++.h>
using namespace std;

int *constructST(int arr[],int n);


int RMQ(int st[] , int n, int a, int b);
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++)
            cin>>A[i];
        int Q;
        cin>>Q;



        int *segTree = constructST(A,N);

        for(int i=0;i<Q;i++)
        {
            int start,e;
            
            cin>>start>>e;
            if(start>e)
            {
                swap(start,e);
            }
            cout<<RMQ(segTree,N,start,e)<<" ";
        }
        cout<<endl;
    }
}
// } Driver Code Ends


/* The functions which 
builds the segment tree */
void bilid_tree(int* arr,int* tree,int treenode,int start,int end){
    if (start==end){
        tree[treenode] = arr[start];
        return;
    }
    int mid = (start+end)/2;
    bilid_tree(arr,tree,2*treenode,start,mid);
    bilid_tree(arr,tree,2*treenode+1,mid+1,end);
    tree[treenode] = min(tree[2*treenode],tree[2*treenode+1]);
    return ;
    
}
int *constructST(int arr[],int n)
{
    int* tree = new int[2*n];
  bilid_tree(arr,tree,1,0,n-1);
  return tree;
}
int query(int* tree,int left,int right,int start,int end,int treenode){
    if (left>end || right<start){
        return INT_MAX;
    }
    if (left<=start && right>=end){
        return tree[treenode];
    }
    int mid = (start+end)/2;
    int ans1 = query(tree,left,right,start,mid,2*treenode);
    int ans2 = query(tree,left,right,mid+1,end,2*treenode+1);
    return min(ans1,ans2);
    
}
int RMQ(int st[] , int n, int a, int b)
{
  return query(st,a,b,0,n-1,1);
}
