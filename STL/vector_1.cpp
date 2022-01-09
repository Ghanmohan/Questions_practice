#include<bits/stdc++.h>


using namespace std;

int main()
{
	//Methods to initialize and create a vector
	vector<int> a;
	vector<int> b(5, 10); // five integers with a value of 10 -> can also initialize an array of n elements with 0 as its intiall value eg. (n,0)
	vector<int> c(b.begin(), b.end());
	vector<int> d{1, 2, 3, 4, 5};

	//Methods of iterating a vector

	for (int i = 0; i < c.size(); i++)
	{
		cout << c[i] << endl;
	}
	cout << endl;

	for (vector<int>::iterator it = b.begin(); it != b.end(); it++)
	{
		cout << (*it) << endl;
	}
	cout << endl;

	// For each loop

	for (int x : d)
	{
		cout << x << ",";
	}
}