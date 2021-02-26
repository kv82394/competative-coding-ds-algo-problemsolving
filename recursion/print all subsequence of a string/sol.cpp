/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;
int fun(string str,vector<string>& output){
    if (str.length()==0){
        output.push_back("");
        return 1;
    }
    string small_str = str.substr(1,str.length()-1);
    //cout <<small_str<<endl;
    int x = fun(small_str,output);
    for (int i = 0 ;i< x;i++){
        string temp ="";
        temp = str[0]+ output[i];
        output.push_back(temp);
    }
    return 2*x;
}

int main()
{
    string str = "abc";
    vector<string> output;
    int n = fun(str,output);
    //cout <<n;
    for (int i =0 ;i< n ;i++){
        cout << output[i]<<endl;
    }

    return 0;
}
