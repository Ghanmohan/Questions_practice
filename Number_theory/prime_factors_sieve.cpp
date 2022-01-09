#include<bits/stdc++.h>
using namespace std;

//using the optimised version of prime sieve
vector<int> primesieve(int *p, int n)
{
	p[0] = p[1] = 0;
	p[2] = 1;


	//marking all the odd numbers as prime
	for (int i = 3; i <= n; i += 2)
	{
		p[i] = 1;
	}

	for (int i = 3; i <= n; i += 2)
	{
		if (p[i])
		{	// marking the non primes numbers as 0
			//Optimisation : iterate over prime numbers only
			for (int j = i * i; j <= n; j += 2 * i)
			{
				p[j] = 0;
			}
		}
	}

	vector<int> primes;
	primes.push_back(2);

	for (int i = 3; i <= n; i += 2)
	{
		if (p[i] == 1)
		{
			primes.push_back(i);
		}
	}
	return primes;
}

//function returns a vector of prime factors
vector<int> factorize(int m, vector<int> &primes)
{
	vector<int> factors;
	factors.clear();
	int i = 0;
	int p = primes[0];

	while (p * p <= m)
	{
		if (m % p == 0)
		{
			factors.push_back(p);
			while (m % p == 0)
			{
				m = m / p;   // important property of the question
			}
		}

		//goes to the next position
		i++;
		p = primes[i];
	}

	if (m != 1)
	{
		factors.push_back(m);
	}
	return factors;
}



int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int N = 1000000;
	int p[N] = {0}; // initializing the array with value 0
	vector<int> primes = primesieve(p, 100);

	int t; cin >> t;
	while (t--)
	{
		// program do not ran first time because of problem of choosing the variable correctly
		// chose n instead of any other variable which is to be used
		int no; cin >> no;

		vector<int> factors = factorize(no, primes);
		for (auto f : factors)
		{
			cout << f << " " << endl;
		}
	}
	return 0;
}