//using of upper and lower bound
//lower bound-> the value just less than or equal to the given value

#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int arr[] = {1, 2, 3, 3, 3, 3, 4, 5};
	int n = sizeof(arr) / sizeof(int);


	int * lb = lower_bound(arr, arr + n, 3);
	cout << "address of lower bound is " << lb << endl;
	cout << "lower bound of 3 is  " << (lb - arr) << endl; //gives the lower bound

	int * ub = upper_bound(arr, arr + n, 3);
	cout << "address of upper bound is " << ub << endl;
	cout << "upper bound of 3 is  " << (ub - arr) << endl;

	cout << "Frequency of 3 is " << (ub - lb) << endl;

}