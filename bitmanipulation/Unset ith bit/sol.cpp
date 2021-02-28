int turnOffIthBit(int n, int i){
int x = ~(x<<i);
    return x&n;
    
}
#include <iostream>
#include "Solution.h"
using namespace std;

int main() {
	int n, i;

	cin >> n >> i;
	
	cout<< turnOffIthBit(n, i) <<endl;
		
	return 0;
}
