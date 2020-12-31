class Solution {
public:
    int maxSubArray(vector<int>& arr) {
            int n = arr.size();
    int curr_sum = 0;
    int last_option = arr[0];
    int max_sum = INT_MIN;
    for (int i = 0 ;i< n ;i++){
        last_option = max(last_option,arr[i]);
        curr_sum += arr[i];
        if (curr_sum<=0){curr_sum = 0;}
        max_sum = max(max_sum,curr_sum);
    
    }
    if (max_sum==0){
        return last_option;
    }else {
      return max_sum;  
    }
    }
};
