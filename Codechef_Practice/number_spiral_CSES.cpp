#include<bits/stdc++.h>
#define ll long long
#define l long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t; cin >> t;
	l int x, y;
	while (t--)
	{
		cin >> x >> y;
		if (x < y)
		{
			if (y % 2 == 0)
			{
				l int result = (y * y);
				cout << result - x + 1 << endl;
			}
			else
			{
				l int result = (y - 1) * (y - 1) + 1;
				cout << result + x - 1 << endl;
			}
		}
		else
		{
			if (x % 2 == 0)
			{
				l result = x * x;
				cout << result - y + 1 << endl;
			}
			else
			{
				l result = (x - 1) * (x - 1) + 1;
				cout << result + y - 1 << endl;
			}
		}
	}
	return 0;
}