class Solution {
public:
    int arr[31];
    int fun(int n){
        if (n<=1) return n;
        if (arr[n]){
            return arr[n];
        }
       int x = (fun(n-2) + fun(n-1));
        arr[n] = x;
        return x;
    }
        
    int fib(int n) {
        arr[0] = 0;
        arr[1] = 1;
        for (int i=2;i<31;i++){
            arr[i] = 0;
        }
        return fun(n);
    }
};
