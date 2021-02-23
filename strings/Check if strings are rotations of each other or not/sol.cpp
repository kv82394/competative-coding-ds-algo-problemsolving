
bool areRotations(string, string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        cout<<areRotations(s1,s2)<<endl;

    }
    return 0;
}
// } Driver Code Ends


/*  Function to check if two strings are rotations of each other
*   s1, s2: are the input strings
*/
bool areRotations(string s1,string s2)
{
    //string pat_match = s1;
    int n = s2.length();
    int n2 = s1.length();
    if (n!=n2)return false;
    if (s1==s2)return true;
    s1 = s1 + s1;
    if (s1.find(s2)!=string::npos){
        return true;
    }
    
    

    return false;
}
