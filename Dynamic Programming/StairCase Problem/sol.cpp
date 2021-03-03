long arr[10000];
long fun(int n){
    if (arr[n]!=0){
        return arr[n];
    }
	if (n==0)return 1;
    if (n==1)return 1;
    if (n==2)return 2;
    long x = fun(n-1);
    long y = fun(n-2);
    long z = fun(n-3);
    arr[n] = x+y+z; 
    return (x+y+z);
}
long staircase(int n)
{
    for (int i = 0 ;i< n;i++){
        arr[i] = 0;
    }
    return fun(n);

    
}
