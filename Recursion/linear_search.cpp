#include<bits/stdc++.h>
using namespace std;




int storeOcc(int *a, int i, int n, int key, int *out, int j) {
	//base case
	if (i == n) {
		return j;
	}
	//recursive case

	if (a[i] == key) {
		out[j] = i;

		//increament the value of j to accomodate the current occurence
		return storeOcc(a, i + 1, n, key, out, j + 1);
	}

	//the value of j remains the same
	return storeOcc(a, i + 1, n, key, out, j);




}

//error that occured in first place is segmentation fault because
//the arguments declaration was diffrent in functions and at last
void allocc(int *a, int i, int n, int key) {
	if (i == n) {
		return;
	}

	//recursion case
	if (a[i] == key) {
		cout << i << ", ";
	}
	allocc(a, i + 1, n, key);
}

int lastOcc(int *a, int n, int key) {
	//base case
	if (n == 0) {
		return -1;
	}

	//recursive case

	int i = lastOcc(a + 1, n - 1, key);
	if (i == -1) {
		if (a[0] == key) {
			return 0;
		}
		else {
			return -1;
		}
	}
	//otherwise if i is obtained by subproblem it is not -1
	return i + 1;
}

int linear_search(int *a, int n, int key)
{
	if (n == 0) {
		return -1;
	}

	//recursion case

	if (a[0] == key) {
		return 0;
	}

	int i = linear_search(a + 1, n - 1, key);
	if (i == -1) {
		return -1; //very very important case to see if the key is present or not
	}
	return i + 1; // meaning the remaining part contains the number and the index is i+1
}

//diffrent style for writing the above function
//using the recusion as for loop

int linear_search_2(int *a, int i, int n, int key) {
	//base case
	if (i == n) {
		return -1;
	}
	//rec case
	if (a[i] == key) {
		return i;
	}
	return linear_search_2(a, i + 1, n, key);
}

int main()
{


	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = {1, 2, 7, 3, 4, 5, 7, 8, 9};
	int key = 7;
	int n = sizeof(arr) / sizeof(int);
	cout << linear_search(arr, n, key) << endl;
	cout << linear_search_2(arr, 0, n, key) << endl;
	cout << lastOcc(arr, n, key) << endl;
	allocc(arr, 0 , n, key);
	cout << endl;

	int output[100];
	int cnt = storeOcc(arr, 0, n, key, output, 0);

	cout << "Count = " << cnt << endl;
	for (int k = 0; k < cnt; k++) {
		cout << output[k] << endl;
	}



	return 0;
}