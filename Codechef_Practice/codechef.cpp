#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t; cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		string s;
		for (int i = 0; i < n; i++)
			cin >> s[i];
		sort(s.begin(), s.end());
		int count = 0, maxx = 0;
		for (int i = 0; i < n; i++)
		{
			if (s[i] + k >= 10 and s[i] == s[i - 1])
				count++;
			else {
				maxx = max(maxx, count);
				count = 0;
			}
		}
		cout << maxx << endl;
	}
	return 0;
}