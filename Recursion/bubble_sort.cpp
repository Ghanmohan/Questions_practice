#include<bits/stdc++.h>
using namespace std;


void bubble_sort(int arr[], int n) {
	//base case
	if ( n == 1) {
		return ;
	}
	//recursive case

	//moving the largest element to the end of the array to end by using pairwise swapping
	for (int j = 0; j < n - 1; j++) {
		if (arr[j] > arr[j + 1]) {
			swap(arr[j], arr[j + 1]);
		}
	}

	//sorting the remaining n-1 elements
	bubble_sort(arr, n - 1);
}

void bubble_sort_recursive(int arr[], int j, int n) {

	//base case
	if (n == 1) {
		return ;
	}

	if (j == n - 1) {

		//single pass of the current array has been done
		return bubble_sort_recursive(arr, 0, n - 1);
	}

	//recursive case
	if (arr[j] > arr[j + 1]) {
		swap(arr[j], arr[j + 1]);
	}
	bubble_sort_recursive(arr, j + 1, n);
	return;

}

int main() {


	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = {5, 4, 3, 1, 2};
	int n = 5;
	bubble_sort(arr, n);
	bubble_sort_recursive(arr, 0, n);

	return 0;

}