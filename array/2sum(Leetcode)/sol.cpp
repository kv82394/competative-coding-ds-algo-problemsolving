class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n = nums.size();
        map<int ,int> m ;
        map<int ,int>::iterator it;
        for (int i = 0 ;i< n ;i++){
            m[nums[i]] = i;
        }
        for (int i = 0 ;i< n ;i++){
        int x = target-nums[i];
            cout << x <<endl;
        if (i==m[x])
            continue;
        if(m[x]>0){
            ans.push_back(i);
            ans.push_back(m[x]);
            break;
        }
    }

        return ans;
    }
};
