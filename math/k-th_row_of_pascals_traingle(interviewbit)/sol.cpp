vector<int> Solution::getRow(int n) {
vector <int> ans;
int i = n+1;
int val = 1;
for(int j=1; j<=i; j++)
{
    ans.push_back(val);
    val = val*(i - j)/j;
}
return ans;
}
