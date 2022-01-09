// Usage of set in the question to count the unique string when the letters are repeated

#include<bits/stdc++.h>
using namespace std;

void permute_Set(char *in, int i, set<string> &s)
{
	if (in[i] == '\0')
	{
		// cout << in << endl;
		string t(in);
		s.insert(t);
		return;
	}

	for (int j = i; in[j] != '\0'; j++)
	{
		swap(in[i] , in[j]);
		permute_Set(in, i + 1, s);
		//Backtracking

		swap(in[i] , in[j]);
	}
}

int main()
{

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	char in[100];
	cin >> in;

	set<string> s;

	permute_Set(in, 0, s);

	//loop over the set to print them
	for (auto str : s)
	{
		cout << str << endl;
	}

	return 0;
}