#include<bits/stdc++.h>
using namespace std;

bool compare(string a, string b)
{
	if (a.length() == b.length()) {
		return a < b;
	}
	return a.length() > b.length();
}

int main()
{
	int n;
	cin >> n;
	cin.get();

	string s[50];

	for (int i = 0; i < n; i++)
	{
		getline(cin, s[i]); //to accept the string, 3 parameters are used cin,s[i] and compare too.
	}

	sort(s, s + n, compare); // uses compare function as the parameter

	for (int i = 0; i < n; ++i)
	{
		cout << s[i] << endl;
	}
}