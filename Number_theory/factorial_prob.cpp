#include<bits/stdc++.h>
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
	int n, k;

	while (t--)
	{
		cin >> n >> k;

		int ans = INT_MAX;
		//factorisation of k

		int occ = 0;
		for (int i = 2; i * i <= k; i++)
		{
			if (k % i == 0)
			{
				occ = 0;
				while (k % i == 0)
				{
					occ++;
					k = k / i;
				}

				//to find out the powers of i
				int cnt = 0;
				ll p = i;
				while (p <= n)
				{
					cnt += n / p;
					p = p * i;
				}
				ans = min(ans, cnt / occ);
			}
		}
		//we may have the case where a prime factor is left
		if (k > 1)
		{
			int p = k;
			int cnt = 0;

			while (p <= n)
			{
				cnt += n / p;
				p *= k;
			}
			ans = min(ans, cnt);
		}

		if (ans == INT_MAX)
		{
			int ans = 0;
		}

		cout << ans << endl;

	}

	return 0;
}