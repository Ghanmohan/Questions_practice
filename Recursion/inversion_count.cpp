//Inverison count is the count in which we find the pairs in the array where
//a[i]<a[j] and i>j
//can also do the question using the brute force approach which will do the thing in O(N^2) time
//by using the recursion method the time is reduced drastically

#include<bits/stdc++.h>
using namespace std;

int merge(int *a, int s, int e) {
	int mid = (s + e) / 2;

	int i = s;
	int j = mid + 1;
	int k = s;

	int temp[10000];
	int cnt = 0; //counting the cross inversions

	while (i <= mid and j <= e) {
		if (a[i] <= a[j]) {
			temp[k++] = a[i++];
		}
		else {
			// important and diffrent from the previous merge and sort case
			temp[k++] = a[j++];
			cnt += mid - i + 1;
		}
	}

	//filling the array if some of the elements are left in the arrays
	while (i <= mid) {
		temp[k++] = a[i++];
	}
	while (j <= e) {
		temp[k++] = a[j++];
	}

	//copying all the elements to the original array
	for (int i = s; i <= e; i++) {
		a[i] = temp[i];
	}
	return cnt;
}




int inverison_count(int *a, int s, int e) {
	//base case
	if (s >= e) {
		return 0 ;
	}

	//recursive and divide case

	int mid = (s + e) / 2;
	int x = inverison_count(a, s, mid);
	int y = inverison_count(a, mid + 1, e);

	//cross inversions
	int z = merge(a, s, e);


	cout << "X=" << x << " Y=" << y << " Z=" << z << endl;

	return x + y + z;
}

int main() {

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = {1, 5, 2, 6, 3, 0};
	int n = sizeof(arr) / sizeof(int);

	cout << inverison_count(arr, 0, n - 1);

	return 0;


}