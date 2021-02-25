#include<bits/stdc++.h>
using namespace std;
void merg(int arr[],int start,int mid,int end,long long& ans){
    vector<int> vec;
    int i = start;
    int j = mid+1;
    long long count = 0;
    while(i<=mid || j<=end){
        if (i>mid){
            vec.push_back(arr[j]);
            j++;
        }else if(j>end){
            vec.push_back(arr[i]);
            i++;
        }
        else if (arr[i]<arr[j]){
            vec.push_back(arr[i]);
            count += (arr[i]*(end-j+1));
            i++;
        }else if(arr[i]==arr[j]){
            vec.push_back(arr[j]);
            j++;
        }else if(arr[i]>arr[j]){
          vec.push_back(arr[j]);
            j++;
        }
    }
    int k = 0;
    for (int i = start;i<=end;i++){
        arr[i] = vec[k++];
    }
    // cout << start<<" "<<mid<<" "<<end<<"---->";
    // cout << count<<endl;
    ans += count;
}
void fun(int arr[],int start,int end,long long& ans){
    if (start<end){
        int mid= (start+end)/2;
        fun(arr,start,mid,ans);
        fun(arr,mid+1,end,ans);
        merg(arr,start,mid,end,ans);
        
    }
}
int main() {
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0 ;i< n;i++){
            cin >> arr[i];
        }
        long long ans = 0;
        fun(arr,0,n-1,ans);
        cout << ans<<endl;;
        
    }
    
	
}
