class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int len_s1 = s1.length();
        if (len_s1>s2.length()){
            return false;
        }
        sort(s1.begin(),s1.end());
        long long s1_encrypt = 0,s2_encrypt = 0;
        for (int i = 0 ;s1[i];i++){
            s1_encrypt += (int)s1[i];
            s2_encrypt += (int)s2[i];
        }
        cout << s1_encrypt<<" "<<s2_encrypt<<endl;
        if (s1_encrypt==s2_encrypt){return true;}
        for (int i = 0,j = len_s1-1;s2[j];i++,j++){
            if (i==0){continue;}
            //cout << s2_encrypt<<" "<<s2[j]<<" "<<s2[i-1]<<" ";
            s2_encrypt = (s2_encrypt + (int)s2[j]) - (int)s2[i-1];
            //cout << s2_encrypt<<endl;
            if (s1_encrypt==s2_encrypt){
                string temp = s2.substr(i,len_s1);
                sort(temp.begin(),temp.end());
                if (s1==temp){
                    return true;
                }
            }
        }
        return false;
    }
};
