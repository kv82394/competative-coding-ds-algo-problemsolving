#include <iostream>
#include "Solution.h"
using namespace std;

int main() {
	int n;

	cin >> n;
	
	cout<< returnFirstSetBit(n) <<endl;
		
	return 0;
}

int returnFirstSetBit(int n){
    return n&(n^n-1);
}
