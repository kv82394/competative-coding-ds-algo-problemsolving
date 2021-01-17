vector<int> Solution::primesum(int n) {
    vector<int> res,ans;
    bool arr[n];
    arr[0] = false;
    arr[1] =false;
    for (int i = 2 ;i< n ;i++){
        arr[i] = 1;
    }
    for (int i = 2;i*i< n ;i++){
        if (arr[i]){
            for (int j = i*i;j<n;j+=i){
                arr[j] = false;
            }
        }
    }
    for (int i = 0 ;i< n ;i++){
        if (arr[i])res.push_back(i);
    }
    int noe = res.size();
    for (int i = 0 ;i< noe ;i++){
        for (int j = i;j<noe;j++){
            if (res[i]+res[j]==n){
                ans.push_back(res[i]);
                ans.push_back(res[j]);
                return ans;
            }
        }
    }
    
    return ans;
}
