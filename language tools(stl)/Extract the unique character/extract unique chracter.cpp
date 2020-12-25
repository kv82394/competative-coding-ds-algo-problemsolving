/*
Given a string, you need to remove all the duplicates. That means, the output string should contain each character only once. The respective order of characters should remain same.
Input format :
String S
Output format :
Output String
Constraints :
1 <= Length of S <= 50000
Sample Input 1 :
ababacd
Sample Output 1 :
abcd
Sample Input 2 :
abcde
Sample Output 2 :
abcde
*/#include<algorithm>
#include<string.h>
#include<set>


char* uniqueChar(char *str){
    // Write your code here
    set<char> s;
    int len=strlen(str);
    
    char *charr = new char[len];
    int i;
    int j=0;
    for(i=0;str[i]!='\0';i++){
        
       if(s.find(str[i])==s.end())
       {
           s.insert(str[i]);
           charr[j++]=str[i];
       }
     charr[j]='\0';
    }
    return charr;
    
}