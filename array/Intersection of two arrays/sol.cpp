//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
int NumberofElementsInIntersection (int a[], int b[], int n, int m );


 // } Driver Code Ends


//User function template for C++

// Given two arrays A and B and their sizes N and M respectively 
int NumberofElementsInIntersection (int a[], int b[], int n, int m )
{
    int *arr1 = new int[100000];
    int *arr2 = new int[100000];
    for (int i = 0;i<n;i++){
        arr1[a[i]]=1;
    }
    for (int j = 0;j<m;j++){
        arr2[b[j]]=1;
    }
    int count =0 ;
    for (int i=0;i<100000;i++){
        if (arr1[i] && arr2[i])count++;
    }
    return count;
}

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[n], b[m];
		for(int i=0; i<n; i++)
			cin>>a[i];

		for(int i=0; i<m; i++)
			cin>>b[i];
			
		cout << NumberofElementsInIntersection(a,b,n,m) << endl;
	}
	return 0;
}  // } Driver Code Ends
