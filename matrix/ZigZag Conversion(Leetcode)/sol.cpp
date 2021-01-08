class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.length();
        if (numRows ==1){
            return s;
        }
        int noc = (n/(numRows+(numRows-2)))+1;

        noc = noc*(1+(numRows-2));
        char mat[numRows][noc];
        for (int i = 0 ;i<numRows;i++){
          for (int j = 0 ; j< noc;j++){
             mat[i][j] = '\0'; 
          }
        }
        int i = 0,j = 0,k =0;
        int path = 1;
        while(s[k]){
          if (path==1){
              mat[i][j] = s[k];
              i++;
          }
          if (path ==2){
                mat[i][j] = s[k];
                i--;j++;
            }
           if (i>=numRows){
               i--;
               i--;j++;
               path = 2;
           }
            if (i<0){
                i++;j--;
                i++;
                path = 1;
            }
            k++;
        }
        string str="";
        for (i = 0 ;i<numRows;i++){
          for (j = 0 ; j< noc;j++){
              if (mat[i][j]=='\0')continue;
             str = str + mat[i][j]; 
          }
        }
        return str;
    }
};
