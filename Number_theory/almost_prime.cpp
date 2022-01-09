//a number is called prime if it exactly have two distinct prime divisors
//solved using prime sieve
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define pb push_back

int sieve(int n)
{
	int pr[n + 1] = {};
	vector<int> primes;
	int i, j;

	for (i = 2; i <= n; i++)
	{
		if (!pr[i])
		{
			primes.pb(i);
			for (j = i; j <= n; j += i)
			{
				pr[j]++;
			}
		}
	}

	int ans = 0;
	for (int i = 0; i <= n; i++)
	{
		if (pr[i] == 2)
			ans++;
	}
	return ans;
}

void solve()
{
	int i, j, k, m, n, ans = 0, sum = 0;
	cin >> n;
	cout << sieve(n) << endl;
	return;
}

int32_t main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	solve();
	return 0;
}