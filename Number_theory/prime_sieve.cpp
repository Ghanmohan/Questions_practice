//using the prime sieve method
//sieve is coded for the range 10^6, can be changed
//time complexity of sieve is O(Nlog(logN))

#include<bits/stdc++.h>
using namespace std;

#define ll long long

//Sieve approach-generate an array containing the prime numbers
void prime_sieve(int *p, int n)
{
	//for marking all the odd numbers as primes
	for (int i = 3; i < n; i += 2)
	{
		p[i] = 1;
	}

	//sieve
	for (ll i = 3; i <= n; i += 2)
	{
		//if the current number is not prime
		if (p[i] == 1)
		{
			//marking all the multiples of i that are not prime
			for (ll j = i * i; j <= n; j += i)
			{
				p[j] = 0;
			}
		}
	}
	//special cases
	p[2] = 1;
	p[1] = p[0] = 0;

}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	int p[100005] = {0};
	prime_sieve(p, n);

	//printing the primes upto n
	for (int i = 0; i < n; i++)
	{
		if (p[i] == 1)
		{
			cout << i << " ";
		}
	}


}