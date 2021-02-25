/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;
struct node{
    int start;
    int end;
};
int fun(struct node n1[],int cust_entry,int n){
    int i = 0 ;
    int j = n-1;
    int last_ans = -1;
    while(i<=j){
        int mid = (i+j)/2;
        if (n1[mid].start==cust_entry){
            return 0;
        }
        if (n1[mid].start<cust_entry){
        i = mid+1;
        }else if(n1[mid].start>cust_entry){
            last_ans = mid;
            j= mid-1;
        }
    }
    if (last_ans==-1)return -1;
    if (n1[last_ans-1].end>cust_entry)return 0;
    return n1[last_ans].start-cust_entry;
}

bool comp(node x,node y){
    if (x.start<y.start)return true;
    else return false;
}
int main()
{
    int test;
    cin >> test;
    while(test--){
        int n,m;
        cin >> n >> m;
        struct node n1[n];
        for (int i = 0 ;i< n ;i++){
            cin >> n1[i].start>>n1[i].end;
        }
        sort(n1,n1+n,comp);
        for (int i = 0 ;i< m ;i++){
            int x ;
            cin >> x;
            cout << fun(n1,x,n)<<endl;
        }
        
  
    }

    return 0;
}
