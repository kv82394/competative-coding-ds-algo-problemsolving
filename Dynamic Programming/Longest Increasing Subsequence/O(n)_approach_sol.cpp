class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        int arr[n];
        arr[0] = 1;
        for (int i = 1 ;i< n;i++){
            arr[i] = 1;
            for (int j = i-1;j>=0;j--){
                if (nums[j]<nums[i]){
                    arr[i] = max(arr[i],arr[j]+1);
                }
            }
        }
        int best = INT_MIN;
        for(int i = 0 ;i< n ;i++){
            best = max(best,arr[i]);
        }
        return best;
    }
};
