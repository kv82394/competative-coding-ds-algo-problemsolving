#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long arr[n];
    long long sum=0;
    for (int i = 0 ;i< n ;i++){
        int x;
        cin >>x;
        sum += x;
        arr[i] = sum;
    }
    int test;
    cin >>test;
    while(test--){
        int v;
        cin >>v;
        if (v<arr[0]){
            cout << 0<<" "<<v<<endl;
            continue;
        }
        int i =0;
        int j = n-1;
        int ans1,ans2;
        while(i<=j){
            int mid = (i+j)/2;
            if (arr[mid]<=v){
                ans1 = mid+1;
                ans2 = v - arr[mid];
                i = mid+1;
            }else{
                j =  mid-1;
            }
        }
        cout << ans1<<" "<<ans2<<endl;
    }
    
	return 0;
}
