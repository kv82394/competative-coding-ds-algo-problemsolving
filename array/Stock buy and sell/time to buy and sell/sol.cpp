//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function template for C++

class Solution{
public:
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        vector<vector<int> > ans;
        int arr[n];
        arr[n-1] = 1;
        for (int i = n-2;i>=0;i--){
            if (A[i]<A[i+1])
            arr[i] = arr[i+1]+1;
            if (A[i]>A[i+1])
            arr[i] = 1;
            if (A[i]==A[i+1]){
                arr[i] = arr[i+1];
            }
        }
        for (int i = 0 ;i< n ;i++){
            if (arr[i]>1){
                while(arr[i]==arr[i+1])i++;
                vector<int> temp;
                temp.push_back(i);
                while(arr[i]!=1){
                    i++;
                }
                while(A[i]==A[i+1]){
                    i++;
                }
                temp.push_back(i);
                ans.push_back(temp);
            }
            
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A(n);
        for (int i=0; i<n; ++i){
            cin>>A[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.stockBuySell(A, n);
        if(ans.size()==0)
            cout<<"No Profit";
        else{
            for (int i=0; i<ans.size(); ++i){
                cout<<"("<<ans[i][0]<<" "<<ans[i][1]<<") ";
            }
        }cout<<endl;
    }
    return 0;
}

  // } Driver Code Ends
