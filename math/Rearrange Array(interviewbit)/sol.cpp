void Solution::arrange(vector<int> &arr) {
    int n = arr.size();
    for (int i = 0 ;i< n ;i++){
        int x = arr[i]%n;
        int y = arr[x]%n;
        //cout << x<< " "<<y<<endl;
        arr[i] = x+(y*n);
    }
    for (int i = 0 ;i< n ;i++){arr[i]/=n;}
        
    
}

