int Solution::solve(int n, vector<int> &arr) {
    int sum = 0,count =0;
    for (int i = 0 ;i< n ;i++)sum += arr[i];
    if (sum%3!=0)return 0;
    sum /= 3;
    int x= 0,y = 0;
    vector<int> prefix;
    vector<int> suffix;
    for (int i = 0,j = n-1 ;i< n ;i++,j--){
        x += arr[i];
        y += arr[j];
        if (x==sum)prefix.push_back(i);
        if (y==sum)suffix.push_back(j);
    }
    for (int i = 0 ;i<prefix.size();i++){
        for (int j = 0;j<suffix.size();j++){
            int sum1 = 0,n=0;
            for (int k = prefix[i]+1;k<suffix[j];k++){
                sum1 += arr[k];
                n = 1;
            }
            if (sum1==sum && n==1)count++;
        }
    }
    return count;
    
}
