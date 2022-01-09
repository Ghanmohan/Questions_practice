//using recursion for sorting an array

#include<bits/stdc++.h>
using namespace std;

bool isSorted(int *a, int n)
{
	//base case
	if (n == 0 or n == 1) {
		return true;
	}

	//rec case
	if (a[0] < a[1] and isSorted(a + 1, n - 1)) {
		return true;
	}
	else
		return false;
}


int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof (arr) / sizeof (int);
	cout << isSorted(arr, n) << endl;

	return 0;

}
