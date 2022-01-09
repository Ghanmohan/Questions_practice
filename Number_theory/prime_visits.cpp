#include<bits/stdc++.h>
using namespace std;

#define ll long long

void prime_sieve(int *p)
{
	for (int i = 3; i <= 1000000; i += 2)
	{
		p[i] = 1;
	}
	for (ll i = 3; i < 1000000; i += 2)
	{
		if (p[i] == 1)
		{
			for (ll j = i * i; j < 1000000; j += i)
			{
				p[j] = 0;
			}

		}
	}
	p[2] = 1;
	p[0] = p[1] = 0;
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int p[1000005];
	prime_sieve(p);

	int csum[1000006] = {0};

	//precomputes the prime upto an index i

	for (int i = 1; i <= 100000; i++)
	{
		csum[i] = csum[i - 1] + p[i];
	}

	int q; cin >> q;
	while (q--)
	{
		int a, b;
		cin >> a >> b;
		cout << csum[b] - csum[a - 1] << endl;
	}
}