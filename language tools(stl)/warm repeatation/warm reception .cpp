#include <bits/stdc++.h>

using namespace std;

int main()
{
   	int n,chair = 0;
    cin>>n;
    vector<pair<int,char>> v;
    for (int i = 0 ;i<n;i++){
        int x;
        cin>>x;
        v.push_back(make_pair(x,'i'));
    }
    for (int i = 0 ;i<n;i++){
        int x;
        cin>>x;
        v.push_back(make_pair(x,'o'));
    }
    int count = 0;
    sort(v.begin(),v.end());
    for (auto it = v.begin();it!=v.end();it++){
        if(it->second=='i'){
            count++;
        }else{
            count--;
        }
        if (chair<count){
            chair = count;
        }
    }
    cout<< chair;

    return 0;
}
