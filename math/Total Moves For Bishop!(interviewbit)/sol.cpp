int Solution::solve(int a, int b) {
    int i = min(a-1,b-1);
    int j = min(8-b,a-1);
    int k = min(b-1,8-a);
    int l = min(8-b,8-a);
    return (i+j+k+l);
}
