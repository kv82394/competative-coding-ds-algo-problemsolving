#include<bits/stdc++.h>
int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int n = A.size();
    int no_of_steps = 0;
    for (int i = 1 ; i< n ; i++){
        int col_dif = abs(A[i]-A[i-1]);
        int row_dif = abs(B[i]-B[i-1]);
        no_of_steps += max(col_dif,row_dif);
    }
    return no_of_steps;
}
