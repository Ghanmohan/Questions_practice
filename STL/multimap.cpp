#include<bits/stdc++.h>
using namespace std;

int main()
{
	multimap<char, string> m;

	int n;
	cin >> n;

	//insering in the multimap

	for (int i = 0; i < n; i++) {
		char ch;
		string s;
		cin >> ch >> s;
		m.insert(make_pair(ch, s));
	}

	//erasing a particular element
	auto it = m.begin();
	m.erase (it);

	auto it2 = m.lower_bound('b') ;
	auto it3 = m.upper_bound('d') ;
	cout << endl;

	for (auto it4 = it2; it4 != it3; it4++) {
		cout << it4->second << "."; 	//Important that iterator are assigned using (->)
	}

	//search for a particular element

	auto f = m.find('c');
	if (f->second == "cat") {
		m.erase(f);
	}
	cout << endl;




	for (auto p : m) {
		cout << p.first << "->" << p.second << endl;

	}


}