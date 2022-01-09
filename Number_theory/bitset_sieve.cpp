//space optimised version of erasthomus sieve
// more space less complexity

#include<bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

const int n = 10000000;
bitset<10000005> b;
vector<int> primes;

void sieve()
{
	// set all the primes

	b.set(); // 1,1,1,1,1,1,1,1
	b[0] = b[1] = 0;

	for (ll i = 2; i <= n; i++)
	{
		if (b[i])
		{
			// main for loop for the sieve in all the cases

			primes.push_back(i);

			for (ll j = i * i; j <= n; j += i)
			{
				b[j] = 0;
			}
		}
	}
}

int main()
{

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int a ; cin >> a;
	sieve();
	for (int i = 0; i < a; i++)
	{
		cout << primes[i] << " " << endl;
	}
}