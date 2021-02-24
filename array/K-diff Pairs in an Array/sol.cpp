class Solution {
public:
    int findPairs(vector<int>& arr, int k) {
        int n = arr.size();
        map<int,int> m;
        for (int i =0 ;i< n ;i++){
            m[arr[i]]++;
        }
        int count = 0;
        for (int i = 0 ;i< n ;i++){
            if (m[arr[i]]>0){
                m[arr[i]]--;
                int x = arr[i]+k;
                if (m[x]>0){
                    count++;
                    
                }
                int y = arr[i]-k;
                if (m[y]>0 && y!=x){
                    count++;
                   
                } 
                m[arr[i]] = 0;
            }
        }
        return count;
    }
};
