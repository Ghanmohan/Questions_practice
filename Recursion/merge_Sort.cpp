#include<bits/stdc++.h>
using namespace std;

void merge(int *a, int s, int e) {
	int mid = (s + e) / 2;

	int i = s;
	int j = mid + 1;
	int k = s;

	int temp[100];

	while (i <= mid && j <= e) {
		if (a[i] < a[j]) {
			temp[k++] = a[i++];
		}
		else {
			temp[k++] = a[j++];
		}
	}
	while (i <= mid) {
		temp[k++] = a[i++];
	}
	while (j <= e) {
		temp[k++] = a[j++];
	}

	//copying all the elements of the temporary to the original array
	for (int i = s; i <= e; i++) {
		a[i] = temp[i];
	}
}
void mergeSort(int a[], int s, int e) {
	//base case
	if (s >= e) {
		return ;
	}

	//Follow 3 steps
	//Divide
	int mid = (s + e) / 2;

	//recursive call on the two parts
	mergeSort(a, s, mid);
	mergeSort(a, mid + 1, e);

	//merge two arrays
	merge(a, s, e);
}

int main() {

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int a[100];
	int n; cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	mergeSort(a, 0, n - 1);

	for (int i = 0; i < n; i++) {
		cout << a[i] << " " ;
	}

	return 0;

}