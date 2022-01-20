#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	long long int t, a, b;
	cin >> t;

	while (t--)
	{
		cin >> a >> b;
		cout << ((a + b) % 3 == 0 and (min(a, b) * 2 >= max(a, b)) ? "YES" : "NO") << endl;
	}
	return 0;
}