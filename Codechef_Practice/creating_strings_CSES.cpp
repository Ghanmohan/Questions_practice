#include<bits/stdc++.h>
using namespace std;

set<string> p;

void permutations(string prefix, string suffix)
{
	if (suffix.length() == 0)
	{
		p.insert(prefix);
		return;
	}
	for (int i = 0; i < suffix.length(); i++)
	{
		permutations(prefix + suffix[i], suffix.substr(0, i) + suffix.substr(i + 1));
	}
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s; cin >> s;
	permutations("", s);
	cout << p.size() << endl;
	for (auto ele : p)
	{
		cout << ele << endl;
	}

	return 0;
}