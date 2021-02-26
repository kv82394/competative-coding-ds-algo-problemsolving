#include <iostream>
#include <string>
using namespace std;
string str[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void fun(int n,string output){
    if (n==0){
        cout << output<<endl;
        return;
    }
    int rem = n%10;
    n = n/10;
    for (int i = 0 ;i< str[rem].length();i++){
        fun(n,str[rem][i] + output);
    }
    return;
    
}

void printKeypad(int num){
string output = "";
    fun(num,output);
}
