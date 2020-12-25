#include<bits/stdc++.h>
using namespace std;
struct node{
    int st ;
    int ot;
};
bool comp(struct node n1,struct node n2){
    if (n1.st<n2.st){
        return true;
    }else{
        return false;
    }
}
int main() {

	int n,chair = 0;
    cin>>n;
    struct node arr[n];
    for (int i = 0 ;i<n;i++){
        cin>>arr[i].st;
    }
    for (int i = 0 ;i<n;i++){
        cin>>arr[i].ot;
    }
    sort(arr,arr+n,comp);
    vector<int> vec;
    vec.push_back(arr[0].ot);
    for (int i = 1 ;i<n;i++){
        int x = arr[i].st;
        sort(vec.begin(),vec.end());
        for (auto it= vec.begin();it!=vec.end();it++){
            int y = *it;
            if (*it>x){
                vec.push_back(arr[i].ot);
                break;
            }
            else if (*it<x){
                vec.erase(it);
                it--;
            }
        }
        if (vec.size()>chair){
            chair = vec.size();
        }

        
    }
    cout<<chair;
    
    
    
    
    return 0;
}