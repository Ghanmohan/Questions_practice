#include<bits/stdc++.h>
using namespace std;

// class Fun {
// public:
// 	void operator()(string s) {
// 		cout << "Coding in C++ " << s << endl;
// 	}
// };

class Person {
public:

	string name;
	int age;

	Person() {  //Empty Constructor

	}
	Person(string n, int a) {  //Overloading
		name = n;
		age = a;
	}
};

class PersonCompare {
public:
	bool operator()(Person A, Person B) {
		return A.name < B.name;
	}
};


int main()
{

	int n;
	cin >> n;

	priority_queue<Person, vector<Person>, PersonCompare> pq; // Method to initialize the priority queue when an other constructor is there.

	for (int i = 0; i < n; i++) {
		string name;
		int age;
		cin >> name >> age;
		Person p(name, age);
		pq.push(p);
	}
	cout << endl;

	int k = 3;
	for (int i = 0; i < k; i++) {
		Person p = pq.top();
		cout << p.name << " " << p.age << " ";
		pq.pop();
		cout << endl;
	}


	// Fun f; //Constructor
	// f("Silently");// Overloaded () operator=Function call when f is an object

	return 0;
}