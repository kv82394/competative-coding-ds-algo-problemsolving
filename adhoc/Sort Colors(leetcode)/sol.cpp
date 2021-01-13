class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int arr[3];
        arr[0] = 0;arr[1]=0;arr[2]=0;
        for (int i = 0 ;i< n ;i++){
            arr[nums[i]]++;
        }
        int i = 0;int j = 0;
        while(1){
        while(arr[i]--){
            nums[j] = i;
            j++;
            }
        i++;
            if (i==3)break;
        }
    }
};
