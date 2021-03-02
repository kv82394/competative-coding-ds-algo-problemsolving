#include <bits/stdc++.h>

using namespace std;

    

int main()
{
    int n ;
    cin >> n ;
    int arr[n];
    for (int i = 0;i< n ;i++){
        cin >> arr[i];
    }
    vector<int > v;
    v.push_back(arr[0]);
    for (int i = 1;i< n ;i++){
        if (v.back()<arr[i]){
            v.push_back(arr[i]);
        }else {
            int index = lower_bound(v.begin(),v.end(),arr[i])-v.begin();
            v[index] = arr[i];
        }

    }
    for (int i = 0 ;i< v.size() ;i++){
        cout << v[i]<<" ";
    }
    cout << endl;
    cout << v.size();


    return 0;
}
