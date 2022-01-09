#include<bits/stdc++.h>
using namespace std;

int main() {
	int arr[] = {1, 22, 4, 53, 6, 78, 90};
	int n = sizeof(arr) / sizeof(int);

	cout << sizeof(arr) << " And " << sizeof(int) << endl; //checking the size of arr and int and can also check various others sizes using the method
	cout << n << endl;

	set<int> s;
	for (int i = 0; i < n; i++) {
		s.insert(arr[i]);
	}
	//remove elements from the set

	//First method: removes the element directly
	s.erase(22);

	// Second Method: first finds the element and then removes it
	auto it = s.find(78);
	s.erase(it);


	//Print all the numbers
	for (auto it = s.begin(); it != s.end(); it++) {
		cout << (*it) << "->";
	}
}