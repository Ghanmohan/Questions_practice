//usage of list and methods to insert and delete elements in the list

#include<bits/stdc++.h>
using namespace std;

int main()
{
	//methods of initialising the list
	list<int> l;

	//another method of initialisation list with numbers
	list<int> l2{1, 2, 3, 4, 5};

	// list with characters
	list<string> l3{"ghanmohan", "yatharth", "kavita", "pardeep"};

	// inbuilt sorting function that sorts lexigraphically

	l2.sort();
	for (int x : l2)
	{
		cout << x << "<";
	}
	cout << endl;

	l3.sort();
	l3.reverse();

	l3.pop_back();
	l3.push_front("savitri");
	l3.push_back("ghanmohan");
	l3.push_back("yatharth");

	for (string s : l3)
	{
		cout << s << " -> ";
	}
	cout << endl;

	//remove an element in a list

	string g;
	cin >> g;
	l3.remove(g);

	//iterate over the list and print the data

	// First Method:
	for (string s : l3)
	{
		cout << s << "-->";
	}
	cout << endl;

	//Method Second
	for (auto it = l3.begin(); it != l3.end(); it++)
	{
		cout << (*it) << " -> ";
	}

}