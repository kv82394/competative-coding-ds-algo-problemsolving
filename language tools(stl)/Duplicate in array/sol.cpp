#include <iostream>
using namespace std;

int findDuplicate(int *arr, int n)
{
    int arr1[n];
    for (int i = 0 ;i< n ;i++){
        arr1[i] = 0;
    }
    for (int i = 0 ;i< n ;i++){
        arr1[arr[i]] +=1;
    }
    for (int i = 0 ;i< n ;i++){
        if (arr1[i]==2){
            return i;
        }
    }
}

int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << findDuplicate(input, size) << endl;
	}

	return 0;
}
