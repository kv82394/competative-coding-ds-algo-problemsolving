class Solution {
public:
    int reverse(int x) {
        long long sum = 0 ;
        int max = INT_MAX;
        int min = INT_MIN;
        //cout << max<<endl<<min<<endl;
       while(x){
          int pop = x%10;
           sum = sum*10 + pop;
           x /= 10;
           if(sum>=max){
               return 0;
           }
           if (sum<=min){
               return 0;
           }

       }
     return sum;
    }
};
