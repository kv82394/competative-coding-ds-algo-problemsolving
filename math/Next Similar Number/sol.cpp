#include<string> 
string Solution::solve(string str) {
    string ans="";
    int n = str.size();
    int i,j,pivot;
    vector<int> arr;
    arr.push_back((int)str[n-1]-48);
    for (i = n-2;i>=0;i--){
        int x = ((int)str[i])-48;
        int y = ((int)str[i+1])-48;
        if (x>=y){
            arr.push_back(x);
            continue;
        }else{
        pivot = x;
        break;
        }
        
    }
    if (i==-1)return "-1";
    str = str.substr(0,i);
    for (j = 0;j<arr.size();j++){
        if (arr[j]>pivot){
            break;
        }
    }
    int flag = 1;
    ans = ans + to_string(arr[j]);
    for (int k = 0;k< arr.size();k++){
        if (k==j && flag==0)continue;
        if (arr[k]>pivot && flag == 1){ ans = ans+to_string(pivot);flag =0;}else{
        ans = ans+to_string(arr[k]);}
    }
    return str+ans;
    
    
}
