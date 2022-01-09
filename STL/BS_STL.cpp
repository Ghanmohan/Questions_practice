//using the inbuilt function binary search

#include<iostream>
#include<algorithm>

using namespace std;

int main()
{

	int arr[5];
	for (int i = 0; i <= 5; i++)
	{
		cin >> arr[i] ;
	}

	int n = sizeof(arr) / sizeof(int);

	//binary search

	int key;
	cin >> key;
	bool present = binary_search(arr, arr + n, key);
	if (present)
		cout << " present ";
	else
	{
		cout << " absent ";
	}
}