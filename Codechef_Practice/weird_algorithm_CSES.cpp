#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	long long int n;
	cin >> n;
	cout << n << " ";
	while (n > 1 and n != 0)
	{
		if (n & 1)
			n = (3 * n) + 1;
		else
			n >>= 1;
		cout << n << " ";
	}
	return 0;
}
