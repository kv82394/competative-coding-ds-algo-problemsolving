// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  long long int arr[1001];
  int m = 1000000007;
  long long int fun(long long int n){
      if (n<=1)return n;
      if (arr[n]) return arr[n];
      long long int x = (fun(n-2)%m + fun(n-1)%m)%m;
      arr[n] = x;
      return x;
  }
  long long int nthFibonacci(long long int n){
        for (int i = 0 ;i< 1001 ;i++){
            arr[i] = 0;
        }
        return fun(n);
    }
    
};//823693831

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends
