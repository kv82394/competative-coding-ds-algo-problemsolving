vector<int> Solution::plusOne(vector<int> &arr) {
    int n = arr.size();
    int carry  = 1 ;
    for (int i = n-1;i>=0;i--){
        int sum = arr[i] + carry;
        carry = sum/10;
        arr[i] = sum%10;
        if (i==0 && carry>0){
            arr.insert(arr.begin(),carry);
        }
    }
    for (auto it = arr.begin();it!=arr.end();it++){
        if (*it!=0)break;
        if (*it==0){
        arr.erase(it);
        it--;
        }
    }
    return arr;
}
