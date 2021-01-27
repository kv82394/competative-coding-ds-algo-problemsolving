class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int ,vector<int>, greater<int>> q;
        int n = nums.size();
        for (int i = 0 ;i< n ;i++){
            q.push(nums[i]);
            if (q.size()>k){
                q.pop();
            }
        }
        return q.top();
        
    }
};
