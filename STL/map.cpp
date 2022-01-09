//usage and diffrent functions of map


#include<bits/stdc++.h>
using namespace std;

int main()
{
	map<string, int> m;

	//Insertion in map

	//1. insertion in pairs i.e 2 elements

	m.insert(make_pair("Mango", 80));

	//2. also insertion in pair but uisng diffrent method

	pair<string, int> p;
	p.first = "Apple";
	p.second = 120;

	m.insert(p);

	//3.direct insertion

	m["Banana"] = 50;



	//Search through the map(using .find())

	string fruit;
	cin >> fruit;

	//update the price of fruit
	m[fruit] += 24;


	auto it = m.find(fruit);  //replacement of auto is : map<string,int>::iterator
	if (it != m.end())
	{
		cout << "Price of " << fruit << " is: " << m[fruit] << endl;
	}
	else {
		cout << "The fruit is not present" << endl;
	}


	//Erasing a particular key
	m.erase(fruit);

	//Finding using count
	//Map also stores unique value to each key

	if (m.count(fruit)) {
		cout << "Price is " << m[fruit] << endl;
	}
	else {
		cout << "The fruit is not present" << endl;
	}

	m["Watermelon"] = 30;
	m["Litchi"] = 60;

	//Iterate all the elements present in the map

	for (auto it = m.begin(); it != m.end(); it++) {
		cout << it->first << " is " << it->second << endl;

		//Alternative appraoch used in cout statement

		// cout << (*it).first << " and " << (*it).second << endl;
	}
	cout << "By using for each loop" << endl;

	for (auto x : m) {
		cout << x.first << " : " << x.second << endl;
	}
	return 0;
}