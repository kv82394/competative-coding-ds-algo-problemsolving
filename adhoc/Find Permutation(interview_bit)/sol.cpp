vector<int> Solution::findPerm(const string str, int n) {
    vector<int> arr ,ans;
    for (int i = 1;i<=n;i++){
        arr.push_back(i);
    }
    int point_i = 0;
    int point_j = n-1;
    for (int i = 0;str[i];i++){
    if (str[i]=='I'){
        ans.push_back(arr[point_i]);
        point_i++;
    }else{
        ans.push_back(arr[point_j]);
        point_j--;
        }
    }
    ans.push_back(arr[point_i]);
    return ans;
}
