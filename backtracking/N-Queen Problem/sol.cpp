#include<iostream>
using namespace std;
#include "Solution.h"

int main(){

  int n; 
  cin >> n ;
  placeNQueens(n);

}
int mat[11][11];
bool check(int n ,int row,int col){
    for (int i = row-1;i>=0;i--)
        if (mat[i][col]==1)return false;
    for (int i = row-1,j = col-1;i>=0 && j>=0;i--,j--)
        if (mat[i][j]==1)return false;
    for (int i = row-1,j = col+1;i>=0 && j<n;i--,j++)
        if (mat[i][j]==1)return false;
    
    return true;
}
void fun(int n,int row){
    if (n==row){
    for (int i = 0 ;i< n ;i++){
        for (int j = 0 ;j< n ;j++){
            cout << mat[i][j]<<" ";
        }
    }
        cout << endl;
        return;
    }
    for (int i = 0 ;i<n;i++){
        if (check(n,row,i)){
            mat[row][i] = 1;
            fun(n,row+1);
        }
        mat[row][i] = 0;
    }
}
void placeNQueens(int n){
    for (int i = 0 ;i< n ;i++){
        for (int j = 0 ;j< n ;j++){
            mat[i][j] = 0;
        }
    }
    fun(n,0);
}
