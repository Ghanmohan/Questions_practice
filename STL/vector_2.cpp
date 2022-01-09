#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> d{1, 2, 3, 4, 5};

	//push_back() add the element to the last of the vector

	d.push_back(10);

	//pop_back() remove the element from the last

	d.pop_back();

	//insert() add the element in the vector at desired position

	d.insert(d.begin() + 3, 4, 19);

	//erase() deletes the element

	d.erase(d.begin() + 4);
	d.erase(d.begin() + 3, d.begin() + 6);

	cout << d.size() << endl;
	cout << d.capacity() << endl;
	d.clear();
	cout << d.size() << endl;

	// d.insert(d.begin(), 5, 1);
	if (d.empty())
	{
		cout << "It is an empty vector";
	}

	for (int x : d)
	{
		cout << x << ",";
	}
	cout << endl;

	//Usage of reserve function



	int n; cin >> n;
	vector<int> v;

	v.reserve(1000);

	for (int i = 0; i < n; i++)
	{
		int no;
		cin >> no;
		v.push_back(no);
		cout << "Changing capacity " << v.capacity() << endl;
	}
	cout << v.capacity() << endl;


	for (int x : v)
	{
		cout << x << ",";
	}



}