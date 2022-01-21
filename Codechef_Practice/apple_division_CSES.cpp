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

	int n; cin >> n;
	ll a = 0, b = 0, total = 0, sum = 0;
	vector<ll> l(n);
	for (ll &x : l)
	{
		cin >> x;
		total += x;
	}
	ll ans = 0;

	for (int msk = 0; msk < (1 << n); msk++)
	{
		sum = 0;
		for (int i = 0; i < n; i++)
		{
			if (msk & (1 << i))
				sum += l[i];
		}
		if (sum <= total / 2)
			ans = max(ans, sum);
	}

	cout << total - 2 * ans << endl;
	return 0;
}