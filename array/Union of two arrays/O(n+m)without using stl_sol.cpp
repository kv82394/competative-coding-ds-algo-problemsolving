//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

int doUnion(int *, int , int *, int);

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	   
	    cout << doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}// } Driver Code Ends


//User function template in C++

// a and b : given array with n and m size respectively

int doUnion(int a[], int n, int b[], int m)  {
    int *arr = new int[100000];
    for (int i= 0,j=0;i<n || j<m;i++,j++){
        if (i<n)arr[a[i]] = 1;
        if (j<m)arr[b[i]] = 1;
    }
    n = sizeof(arr)/sizeof(int);
    int count = 0;
    for (int i = 0 ;i< 100000 ;i++){
        if (arr[i]==1)count++;
    }
    return count;
}
