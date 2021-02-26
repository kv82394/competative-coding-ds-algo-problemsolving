int partation(int arr[],int start,int end){
    int pivot = arr[start];
    int i = start;
    int j = end;
    while(i<j){
        while(arr[i]<=pivot)i++;
        while(arr[j]>pivot)j--;
        if (i<j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            //cout << "swap beween "<<i<<" "<<j<<endl;
        }
    }
        int temp = arr[start];
        arr[start] = arr[j];
        arr[j] = temp;
    return j;
}
void quick_sort(int arr[],int start,int end){
    if (start<end){
        int pivot = partation(arr,start,end) ;
        quick_sort(arr,start,pivot-1);
        quick_sort(arr,pivot+1,end);
    }
}
void quickSort(int arr[], int n) {
    quick_sort(arr,0,n-1);

    

}
#include<iostream>
#include "Solution.h"
using namespace std;


int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }
    
    delete [] input;

}


