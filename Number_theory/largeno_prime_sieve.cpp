//sieve for large numbers -> more than 10^12

#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

const int n = 10000000;
bitset<1000005> b;
vector<int> primes;


void sieve()
{
	// set all the sieve
	b.set(); // setting all the bits to 1
	b[0] = b[1] = 0;

	for (ll i = 2; i <= n; i++)
	{
		if (b[i])
		{
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
	int n; cin >> n;
	sieve();
	for (int i == 0; i < n; i++)
	{
		cout << primes[i] << " " << endl;
	}


}