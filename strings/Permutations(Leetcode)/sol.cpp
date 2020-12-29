class Solution {
public:
    void fun(vector<int>& nums,int n,vector<vector<int>>& vec){
        if (n== nums.size()-1){
            vec.push_back(nums);
        }
        for (int i = n ;i<nums.size();i++){
            swap(nums[n],nums[i]);
            fun(nums,n+1,vec);
            swap(nums[i],nums[n]);
        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> vec;
        fun(nums,0,vec);
        return vec;
        
    }
};
