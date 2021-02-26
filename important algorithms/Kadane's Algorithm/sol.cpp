//Kadane's Algorithm
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find subarray with maximum sum
// arr: input array
// n: size of array
int maxSubarraySum(int arr[], int n){
    
   int curr_sum = 0;
   int max_sum = INT_MIN;
   int last_option = INT_MIN;
   for (int i = 0;i<n;i++){
       curr_sum += arr[i];
       if (curr_sum<=0){
           curr_sum = 0;
       }
       max_sum = max(max_sum,curr_sum);
       last_option = max(last_option,arr[i]);
   }
   if (max_sum <last_option)return last_option;
   return max_sum;
    
}



int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
        
        cout << maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends
