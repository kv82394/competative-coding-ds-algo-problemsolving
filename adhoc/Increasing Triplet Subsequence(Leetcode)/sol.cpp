class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        vector<int> from_left(n),from_right(n);
        from_left[0] = INT_MIN;
        from_right[n-1] = INT_MIN;
        int max = nums[0];
        int m = nums[n-1];
        for(int i = 1,j = n-2;i< n ;i++,j--){
            if (m>nums[j]){
                from_right[j] = m;
            }else{
               from_right[j] = INT_MIN; 
            }
            if (m<nums[j]){
                m = nums[j];
            }
            if (nums[i]>max){
                from_left[i] = max;
                }else{
                from_left[i] = INT_MIN;
            }
            if (nums[i]<max){
                max = nums[i];
            }
        }
        for(int i = 1 ;i< n-1 ;i++){
            if (from_left[i]!=INT_MIN && from_right[i]!=INT_MIN){
                return true;
            }
        }
        return false;
        
    }
};
