int Solution::solve(vector<int> &arr, int b) {
    int nob = 0;
    int n = arr.size();
    int last_ind = b-1;
    int start_ind = 0;
    while(start_ind<n){
        if (last_ind>n-1){
            last_ind = n-1;
        }
        int c ;
        while(last_ind>=start_ind){
            if (arr[last_ind]==1){
                c = last_ind;
                last_ind = last_ind + ((2*b)-1);
                start_ind = c+1;
                nob++;
                int x = c+(b-1);
                int y = n-1;
                if (x==y){
                    break;
                }
                
                break;
            }
            last_ind--;
        }
        if (c+(b-1)>=(n-1))break;
        if (last_ind<start_ind)return -1;
        
    }
    return nob;
}
