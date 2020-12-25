/******************************************************************************

Love for character 
print the frequency of a s and p
input 
6 
aabsas
output
3 2 0
*******************************************************************************/

#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string str ;
    cin >>  str ;
    map <char ,int> m;
    for (int i =0 ; i< n ; i++){
        m[str[i]]++;
    } 
    cout << m['a']<<" ";
    cout << m['s']<<" ";
    cout << m['p']<<endl;
    return 0;
}
