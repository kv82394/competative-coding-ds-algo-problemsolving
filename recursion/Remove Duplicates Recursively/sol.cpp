void removeConsecutiveDuplicates(char *input) {
    if (input[0]=='\0'){
        return ;
    }
    if (input[0]!=input[1]){
        removeConsecutiveDuplicates(input+1); 
    }else{
    int i = 1,j=1;
    while(input[i]==input[i-1]){
        i++;
        //cout <<i<<endl;
    }
    for (;input[i]!='\0';i++,j++){
        swap(input[j],input[i]);
    }
    swap(input[i],input[j]);
    removeConsecutiveDuplicates(input+1);
    }
    return;


}
#include <iostream>
using namespace std;
#include "solution.h"

int main() {
    char s[100000];
    cin >> s;
    removeConsecutiveDuplicates(s);
    cout << s << endl;
}
