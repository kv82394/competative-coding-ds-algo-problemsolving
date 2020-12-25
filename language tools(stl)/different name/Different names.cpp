
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string,int> stmap;
    string inp;
    getline(cin,inp);
    string st="";
    for(int i=0;i<inp.length();i++){
        if(inp[i]==' ')
            continue;
        st.append(1,inp[i]);
        if(inp[i+1] == ' ' || inp[i+1] == '\0'){
            if(stmap.find(st)==stmap.end())
                stmap[st]=1;
            else
                stmap[st]++;
            st="";
        }
    }
    int c=0;
    for(auto i=stmap.begin();i!=stmap.end();i++){
        if(i->second>1){
            cout<<i->first<<" "<<i->second<<endl;
            c++;
        }
    }
    if(c==0)
        cout<<"-1";
	return 0;
}