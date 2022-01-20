#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll int n; cin >> n;
	for (ll int i = 1; i <= n; i++)
	{
		cout << (i - 1)*(i + 4)*(i * i - 3 * i + 4) / 2  << endl;
	}
	return 0;
}