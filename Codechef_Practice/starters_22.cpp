#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int s;
	cin >> s;
	while (s--)
	{

		ll n; cin >> n;
		vector<ll> oref(n + 1, 0), pref1(n + 1, 0);
		ll dp[n + 1][n + 1];

		for (int i = 0; i <= n; i++)
		{
			for (int j = 0; j <= n; j++)
			{
				dp[i][j] = 1e18;
			}
		}
		dp[n][n] = 0;
		for (int i = n - 1; i >= 0; i--)
		{
			pref[i] = pref[i + 1] + (a[i] == '0');
			pref1[i] = pref1[i + 1] + (b[i] == '0');
		}
		for (int i = n - 1; i >= 0; i--)
		{
			dp[n][i] = dp[n][i + 1];
			if (b[i] == '1')
			{
				dp[i][n] += pref[n] + pref[i];
			}
		}

		for (int i = n - 1; i >= 0; i--)
		{
			dp[i][n] = dp[i + 1][n];
			if (a[i] == '1')
				dp[i][n] += pref[i] + pref1[n];
		}
		for (int i = n - 1; i >= 0; i--)
		{
			for (int j = n - 1; j >= 0; j--)
			{
				if (a[i] == '0' and b[j] == '0')
				{
					dp[i][j] == min(dp[i][j], dp[i + 1][j]);
					dp[i][j] == min(dp[i][j], dp[i][j + 1]);
				}
				else if (a[i] == '0' and b[j] == '1')
				{
					dp[i][j] == min(dp[i][j])
				}
			}
		}
	}


	return 0;
}