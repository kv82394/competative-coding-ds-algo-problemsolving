class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans = {{arr[0]}};
        for (int i = 1 ;i< n ;i++){
            int temp_len = ans.size();
            //cout << arr[i][0]<<" "<<ans[temp_len-1][1]<<endl;
            if (arr[i][0]<=ans[temp_len-1][1]){
                if (arr[i][1]>ans[temp_len-1][1])
                ans[temp_len-1][1] = arr[i][1];
            }else{
               ans.push_back(arr[i]); 
            }
        }
        return ans;
    }
};
