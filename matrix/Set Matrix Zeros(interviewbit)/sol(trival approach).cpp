void Solution::setZeroes(vector<vector<int> > &mat) {
    int row = mat.size();
    int col = mat[0].size();
    for (int i = 0 ;i< row;i++){
        for (int j = 0;j<col;j++){
            if (mat[i][j]==0){
                for (int k = 0;k<col;k++){
                    if (mat[i][k]==0)continue;
                    mat[i][k]= 2;
                }
                for (int k = 0;k<row;k++){
                    if (mat[k][j]==0)continue;
                    mat[k][j]= 2;
                }
            }
        }
    }
    for (int i = 0 ;i< row;i++){
        for (int j = 0;j<col;j++){
           if (mat[i][j]==2)mat[i][j]= 0; 
        }
        
    }
}
