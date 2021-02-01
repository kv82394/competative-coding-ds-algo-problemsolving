class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int arr[n];
       int m = 0;
        for (int i = n-1;i>=0;i--){
            arr[i] = m ;
            if (m<prices[i]){m = prices[i];}
        }
        m = INT_MIN;
        for (int i =0;i< n ;i++){
            m = max(m,(arr[i]-prices[i]));
        }
        if (m<0)m = 0;
        return m;
    }
};
