 	#include<bits/stdc++.h>
	int longestBitonicSubarray(int *input, int n) {
        int from_front[n];
        int from_back[n];
        vector<int> vec;
        vector<int> bec;
        from_front[0] = 1;
        from_back[n-1] = 1;
        vec.push_back(input[0]);
        bec.push_back(input[n-1]);
        for (int i = 1 ,j = n-2;i< n && j>=0;i++,j--){
            from_front[i] = 1;
            from_back[j] = 1;
            if (vec.back()<input[i]){
                vec.push_back(input[i]);
            }else{
                int ind = lower_bound(vec.begin(),vec.end(),input[i])-vec.begin();
                vec[ind] = input[i];
                
            }
            if (bec.back()<input[j]){
                bec.push_back(input[j]);
            }else{
                int ind = lower_bound(bec.begin(),bec.end(),input[j])-bec.begin();
                bec[ind] = input[j];
                
            }
            from_back[j] = bec.size();
            from_front[i] = vec.size();
        }
        int m = INT_MIN;
        for (int i = 0 ;i< n ;i++){
            m = max(m,from_front[i]+from_back[i]);
        }
        return m-1;
     	
 	}

