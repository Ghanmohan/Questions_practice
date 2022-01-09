//sorting the elements in the order of O(nlogn)
//this method uses a pivot element which is set at the end of the error and all the operations in then made regrding that element
#include<bits/stdc++.h>
using namespace std;

int partition(int *a, int s, int e) {

	//Inplace method (meaning cant take another array)
	int i = s - 1;
	int j = s;

	//making the permanent element the last element in the arrat
	int pivot = a[e];

	for ( ; j <= e - 1;) {
		if (a[j] <= pivot) {
			//merge the smaller element in the region
			i += 1;
			swap(a[i], a[j]);
		}
		//expant the larger region
		j += 1;
	}

	//place the pivot element in the correct index
	swap(a[i + 1], a[e]);
	return i + 1;
}



void quicksort(int *arr, int s, int e) {
	if (s >= e) {
		return;
	}

	//recursive case
	int p = partition(arr, s, e);

	//left part
	quicksort(arr, s, p - 1);

	//right part
	quicksort(arr, p + 1, e);

}

int main()
{

	//Quicksort
	int arr[] = {2, 7, 8, 6, 1, 5, 4, 4, 14};
	int n = sizeof(arr) / sizeof(int);

	quicksort(arr, 0, n - 1) ;

	for (int i = 0; i <= n - 1; i++) {
		cout << arr[i] << " ";
	}
	return 0;

}
