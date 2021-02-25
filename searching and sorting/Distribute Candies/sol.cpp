#include<bits/stdc++.h>
using namespace std;
bool is_possible(long long arr[],int nos,int val,int n){
    for (int i = 0 ;i< n ;i++){
        int x = arr[i]/val;
        nos = nos - x;
        if (nos<=0) return true;
    }
    return false;
}
int main() {

	int test;
    cin >>test;
    while(test--){
        int n,k;
        cin >>n>>k;
        long long arr[n];
        int m= INT_MIN;
        for (int i = 0 ;i< n;i++){
            cin >> arr[i];
            if (m<arr[i])m = arr[i];
        }
        int start = 0;
        int end = m;
        int lat_ans;
        while(start<=end){
            int mid = (start+end)/2;
            bool b = is_possible(arr,k,mid,n);
            if (b){
                lat_ans = mid;
                start = mid+1;
            }else{
                end = mid-1;
            }
        }
        cout << lat_ans<<endl;
    }
    return 0;
}
