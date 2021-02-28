int turnOnIthBit(int n, int i){
   int x = 1;
    while(i--){
        x = x<<1;
    }
    return x|n;
}
#include <iostream>
#include "Solution.h"
using namespace std;

int main() {
	int n, i;

	cin >> n >> i;
	
	cout<< turnOnIthBit(n, i) <<endl;
		
	return 0;
}

