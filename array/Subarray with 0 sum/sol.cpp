// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;


bool subArrayExists(int arr[], int n);
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    	if (subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}// } Driver Code Ends


//Complete this function
bool subArrayExists(int arr[], int n)
{
    map<int,int> m;
    int sum = 0;
    for(int i =0 ;i< n ;i++){
        sum = sum + arr[i];
        if (m[sum]!=0){
            return true;
        }
        m[sum] = 1;
        if (sum==0)return true;
    }
    return false;
}


