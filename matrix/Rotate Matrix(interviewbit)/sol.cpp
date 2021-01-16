void Solution::rotate(vector<vector<int> > &A) {
    int n = A.size();
    int m = 0;
    while (m<n){
        for (int i = m+1;i<n;i++){
            swap(A[m][i],A[i][m]);
        }
        m++;
    }
    for (int i = 0;i<n;i++){
        reverse(A[i].begin(), A[i].end()); 
    }
}
