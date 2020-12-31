class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> res;
        int n = arr.size();
        for(int i = 0 ;i< n-1 ;i++){
            cout << arr[i]<<" ";
            if (i!=0 && arr[i-1]==arr[i]){continue;}
            int j = i+1;
            int k = n-1;
            while(j<k){
                if (arr[j]==arr[j-1] &&  k!=n-1 && arr[k]==arr[k+1]){
                    k--;
                    continue;
                }
                int sum = arr[j] + arr[k];
                if (sum==-arr[i]){
                  vector<int> temp = {arr[i],arr[j],arr[k]};
                  res.push_back(temp); 
                  j++;k--;
                }else if (sum==arr[i]){
                    j++;
                }else if(sum>-arr[i]){
                    if ((arr[j+1]+arr[k])<(arr[j]+arr[k-1])){
                        j++;
                    }else{
                        k--;
                    }
                }else{
                    if ((arr[j+1]+arr[k])<(arr[j]+arr[k-1])){
                        k--;
                    }else{
                        j++;
                    }
                }
            }
            
        }
        cout << endl;
       return res; 
    }
};
