#include<bits/stdc++.h>
void merg(long long arr[] ,int low ,int mid ,int high,long long& x){
    int vec[high-low+1];
    int k = 0;
    int count = 0;
    int i = low;
    int j = mid+1;
    while(i<=mid || j<=high){
        if (i>mid){
            vec[k++] = arr[j];
            j++;
        }else if (j>high){
            vec[k++] = arr[i];
            i++;
        }
        else if (arr[i] < arr[j]){
            vec[k++] = arr[i];
            i++;
        }else if (arr[j]<arr[i]){
          vec[k++] = arr[j];
            j++;
            count = count + ((mid-i)+1);
        }
        else if (arr[i]==arr[j]){
            vec[k++] = arr[i];
            vec[k++] = arr[j];
            i++;j++;
        }
    }
    k = 0;
    for (int i = low;i<=high;i++){
       arr[i] = vec[k++]; 
    }
    x = x + count;
    return ;
}
void fun(long long arr[],long long& x ,int low,int high){
 if (low<high){
     int mid = (low+high)/2;
     fun(arr,x,low,mid);
     fun(arr,x,mid+1,high);
      merg(arr,low,mid,high,x);
    }
    
}
long long inversionCount(long long arr[], int n)
{
    long long x=0;
    int low = 0;
    int high = n-1;
    fun(arr,x,low,high);
    return x;
}
