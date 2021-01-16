void Solution::setZeroes(vector<vector<int> > &mat) {
    int row = mat.size();
    int col = mat[0].size();
    vector row_arr(row,0);
    vector col_arr(col,0);
    for (int i = 0 ;i< row;i++){
        for (int j = 0 ;j<col;j++){
            if (mat[i][j]==0){
                row_arr[i] = 1;
                col_arr[j] = 1;
            }
        }
    }
    for (int i = 0 ;i< row;i++){
        for (int j = 0 ;j<col;j++){
        if (row_arr[i]==1 || col_arr[j]==1){
            mat[i][j] = 0;
        }
        }
        
    }
}
