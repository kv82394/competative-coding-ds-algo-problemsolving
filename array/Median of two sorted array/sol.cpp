class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double x = 5.5;
        vector<double> ans;
        int n = nums1.size();
        int m = nums2.size();
        int i = 0 ,j = 0;
        while(i<n || j<m){
            if (i>=n){
                ans.push_back(nums2[j]);
                j++;
            }else if(j>=m){
                ans.push_back(nums1[i]);
                i++;
            }else if(nums1[i]<nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }else{
                ans.push_back(nums2[j]);
                j++;
            }
        }
        for (int i = 0 ;i< ans.size();i++){
            cout << ans[i]<<" ";
        }
        n = ans.size();
        if (n%2==0){
            return (ans[n/2]+ans[(n/2)-1])/2;
        }else {
            return ans[n/2];
        }
        
        
    }
};
