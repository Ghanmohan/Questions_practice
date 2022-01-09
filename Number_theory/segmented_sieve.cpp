#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int N = 100000; // for taking the value as root n as constrained is given

vector<int> primes;
int p[N] = {0};

void sieve()
{
	for (int i = 2; i <= N; i++)
	{
		if (p[i] == 0)
		{	// for storing the prime number in vector
			primes.push_back(i);

			//marking all the multiples of i as not prime
			for (int j = i; j <= N; j += i)
			{
				p[j] = 1;	//1 means not prime
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

	int t; cin >> t;
	while (t--)
	{
		int n, m;
		cin >> m >> n;

		bool segment[n - m + 1];
		for (int i = 0; i < n - m + 1; i++)
		{
			segment[i] = 0;
		}

		//segmented sieve logic
		for (auto x : primes)
		{
			//stop the loop if the remaining primes are not needed
			if (x * x > n)
			{
				break;
			}

			int start = (m / x) * x;

			//prime numbers lies in the range of segmentes sieve
			if (x >= m and x <= n)
			{
				start = x * 2;
			}
			for (int i = start; i <= n; i += x)
			{
				segment[i - m] = 1;
			}

		}
		// loop to run between n and m and print the prime numbers
		for (int i = m; i <= n; i++)
		{
			if (segment[i - m] == 0 and i != 1) {
				cout << i << endl;
			}
		}
		cout << endl;
	}
	return 0;
}
