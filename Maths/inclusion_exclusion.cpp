//finding the numbers of numbers between 1 and n which are divisible by prime
//less than 20

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

	ll t;
	cin >> t;

	ll primes[] = {2, 3, 5, 7, 11, 13, 17, 19};

	while (t--)
	{
		ll n;
		cin >> n;

		ll subsets = (1 << 8) - 1;
		ll ans = 0;

		for (ll i = 0; i <= subsets; i++)
		{
			ll denom = 1ll;
			ll setbits = __builtin_popcount(i); // inbuild function for counting the number of setbits

			for (ll j = 0; j <= 7; j++)
			{
				if (i & (1 << j))
				{
					denom = denom * primes[j];
				}
			}

			if (setbits & 1)
			{
				ans += n / denom;
			}
			else
			{
				ans -= n / denom;
			}

		}

		cout << ans << endl;
	}
	return 0;
}