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
int no_of_divisors(int m, vector<int> &primes)
{

	int i = 0;
	int p = primes[0];
	int ans = 1;

	while (p * p <= m)
	{
		if (m % p == 0)
		{
			int cnt = 0;

			while (m % p == 0)
			{	cnt++;
				m = m / p;   // important property of the question
			}
			ans = ans * (cnt + 1);
		}

		//goes to the next position
		i++;
		p = primes[i];
	}

	if (m != 1)
	{
		ans = ans * 2;
	}
	return ans;
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
		// program do not ran first time because of problem of not choosing the variable correctly
		// chose n instead of any other variable which is to be used
		int no; cin >> no;

		int divs = no_of_divisors(no, primes);
		cout << divs << endl;

	}
	return 0;
}