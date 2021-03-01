class Solution {
public:
    int arr[101];
    int fun(string s){
        if (arr[s.length()]>0)return arr[s.length()];
        int x1 = 0,x2 = 0;
        if (s.empty())return 1;
        int onedigit = s[0]-48;
        string s1 = s.substr(1,s.length()-1);
        if (onedigit>=1)x1 = fun(s1);
        if (s.length()>=2){
        int twodigit = (((s[0]-48) * 10) + (s[1]-48));
         string s2 = s.substr(2,s.length()-2);   
        if (twodigit<=26 && twodigit>=10)x2 = fun(s2);
        }
        arr[s.length()]=x1+x2;
        return x1+x2;
        
                
    }
    int numDecodings(string s) {
        for (int i = 0 ;i< 101;i++){
            arr[i]= 0;
        }
        if (s[0]=='0')return 0;
        return fun(s);
    }
};
