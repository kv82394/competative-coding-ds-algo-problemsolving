#include<bits/stdc++.h>
typedef long long ll;

using namespace std;
bool is_possible(ll arr[],ll n,ll c,ll val){
    ll last_cow = arr[0];
    c--;
    for (int i = 1 ;i<n;i++){
        if (arr[i]-last_cow>=val){
            last_cow = arr[i];
            c--;
        }
        if (!c)break;
    }
    if (c<=0){
        return true;
    }else{
        return false;
    }
    
}
int main() {

	int test;
    cin >> test;
    while(test--){
        ll n,c;
        cin >> n >> c;
        ll arr[n];
        for (int i = 0 ;i< n ;i++){
            cin>> arr[i];
        }
        sort(arr,arr+n);
        ll i =0 ;
        ll j = arr[n-1]-arr[0];
        ll max_dis = -1;
        //cout << i<<j<<endl;
        while(i<=j){
            ll mid = (i+j)/2;
            bool ispossible = is_possible(arr,mid,n,c);
            if (ispossible){
                max_dis = mid;
                i = mid+1;
            }else{
                j = mid-1;
            }
        }
        cout << max_dis<<endl;
    }
}
