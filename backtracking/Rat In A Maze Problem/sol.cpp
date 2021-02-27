#include<bits/stdc++.h>
int arr[20][20];
void fun(int maze[][20],int n ,int row,int col){
    if (row == n-1 && col==n-1){
        arr[row][col]=1;
      for (int i = 0 ;i< n ;i++){
        for (int j = 0 ;j< n ;j++){
            cout << arr[i][j]<<" ";
        }
    }      
        cout << endl;
        return;
    }
    if (row<0 || row>=n || col<0 || col>=n || maze[row][col]==0 || arr[row][col]==1)return;
    arr[row][col]= 1;
    fun(maze,n,row-1,col);
    fun(maze,n,row+1,col);
    fun(maze,n,row,col-1);
    fun(maze,n,row,col+1);
    arr[row][col] = 0;
}
void ratInAMaze(int maze[][20], int n){
    for (int i = 0 ;i< n ;i++){
        for (int j = 0 ;j< n ;j++){
            arr[i][j] = 0;
        }
    }
    fun(maze,n,0,0);

}
#include<iostream>
using namespace std;
#include "Solution.h"

int main(){

  int n; 
  cin >> n ;
  int maze[20][20];
  for(int i = 0; i < n ;i++){
	for(int j = 0; j < n; j++){
        	cin >> maze[i][j];
        }		
  }
  ratInAMaze(maze, n);
}


