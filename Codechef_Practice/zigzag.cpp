#include<bits/stdc++.h>
using namespace std;

string convert(string s, int numRows)
{
	if (numRows == 1)
	{
		return s;
	}
	const int step = 2 * numRows - 2;
	string z;
	for (int i = 0; i < numRows; ++i)
	{
		for (int j = i; j < s.length(); j += step)
		{
			z.push_back(s[j]);

			if (i > 0 and i < numRows - 1 and s.length() > j + step - 2 * i)
			{
				z.push_back(s[j + step - 2 * i]);
			}
		}
	}
	return z;
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s;
	cin >> s;
	int numRows;
	cin >> numRows;
	cout << convert(s, numRows) << endl;
	return 0;
}