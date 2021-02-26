#include<bits/stdc++.h>
using namespace std;
void merg(int arr[],int start,int mid,int end){
    vector<int> vec;
    int i = start;int j = mid+1;
    while(i<=mid && j<=end){
        if (arr[i]<arr[j]){
            vec.push_back(arr[i]);
            i++;
        }else {
            vec.push_back(arr[j]);
            j++;           
        }
    }
    while(i<=mid){
            vec.push_back(arr[i]);
            i++;      
    }
    while(j<=end){
            vec.push_back(arr[j]);
            j++;      
    }
    int k = 0;
    for (i = start;i<=end;i++){
        arr[i] = vec[k++];
    }
    
}
void fun(int arr[],int start,int end){
    if (start<end){
        int mid = (start+end)/2;
        fun(arr,start,mid);
        fun(arr,mid+1,end);
        merg(arr,start,mid,end);
    }
}
void mergeSort(int input[], int size){
    fun(input,0,size-1);
    
    
}

#include <iostream>
#include "solution.h"
using namespace std;

int main() {
  int length;
  cin >> length;
  int* input = new int[length];
  for(int i=0; i < length; i++)
    cin >> input[i];
  mergeSort(input, length);
  for(int i = 0; i < length; i++) {
    cout << input[i] << " ";
  }
}
