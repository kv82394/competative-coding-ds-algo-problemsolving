int Solution::solve(vector<int> &arr, int B) {
   int n = arr.size();
        int sum = 0;
        int res = 0;
        for(int i = 0 ; i < B ; i++)
            res += arr[i];
            
        sum = res;
        for(int i = 0 ; i < B ; i++)
        {
            sum -= arr[B-1-i];
            sum += arr[n-1-i];
            
            res = max(res, sum);
        }
        return res;
}
