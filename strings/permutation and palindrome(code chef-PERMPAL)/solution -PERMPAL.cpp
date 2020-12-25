#include <bits/stdc++.h>
char get_char(int x){
    return (char)(97+x);
}

using namespace std;
void fun(string s){
    map<char,vector<int>> m;
    for (int i = 0 ;s[i] ;i++){
        m[s[i]].push_back(i);
    }
    int odd_count = 0;
    for (int i = 0 ;i< 26;i++){
        char ch = get_char(i);
        if ( m[ch].size()%2==1){
            odd_count++;
        }
    }
    if (odd_count>1){
        cout << "-1"<<endl;
        return ;
    }
    int arr[s.length()];
    int x = 0,y = s.length()-1;
    for (int i = 0 ;i< 26;i++){
        char ch = get_char(i);
        if (m[ch].size()==0)
           continue;
        if (m[ch].size()%2==1){
            int len = m[ch].size()-1;
            arr[s.length()/2] = m[ch][len--];
            while(len>=0){
                arr[x] = m[ch][len--];
                arr[y] = m[ch][len--];
                x++;y--;
            }
        }else{
            int len = m[ch].size()-1;
            while(len>=0){
                arr[x] = m[ch][len--];
                arr[y] = m[ch][len--];
                x++;y--;
            }
        }
    }
    for (int i = 0 ;s[i];i++){
        cout<< arr[i]+1<<" ";
    }
    cout << endl;
}


int main()
{
    int test;
    cin>> test;
    while(test--){
        string str;
        cin>> str;
        fun(str);
    }

    return 0;
}
