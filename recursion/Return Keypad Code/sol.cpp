#include <string>
using namespace std;
string mas_str[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
int keypad(int num, string output[]){
    if (num==0){
        output[0] = "";
        return 1;
    }
    int rem = num%10;
    num = num/10;
    int x = keypad(num,output);
    int curr_key_len = mas_str[rem].length();
    string temp[x*curr_key_len];
    int k = 0;
    for (int i = 0 ;i<x;i++){
        for (int j = 0 ; j<curr_key_len;j++){
            temp[k++] = output[i] + mas_str[rem][j]; 
        }
    }
    x = x*curr_key_len;
    for (int i = 0 ;i< x;i++){
        output[i] = temp[i];
    }
    return x;
}
#include <iostream>
#include <string>
#include "solution.h"
using namespace std;

int main(){
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}
