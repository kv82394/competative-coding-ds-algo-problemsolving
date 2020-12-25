#include <bits/stdc++.h>

using namespace std;
struct node {
    string str;
    int marks;
    int rank;
};
bool comp(struct node n1,struct node n2){
    if (n1.marks>n2.marks){
        return true;
    }
    if (n1.marks<n2.marks){
        return false;
    }
    if (n1.marks==n2.marks){
        if (n1.rank<n2.rank){
            return true;
        }else{
            return false;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    struct node arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i].str;
        int x,y,z;
        cin>>x>>y>>z;
        arr[i].marks = x+y+z;
        arr[i].rank = i;
    }
    sort (arr,arr+n,comp);
    for (int i = 0 ;i< n ;i++){
        cout <<i+1<<" "<<arr[i].str<<endl;
    }

    return 0;
}
