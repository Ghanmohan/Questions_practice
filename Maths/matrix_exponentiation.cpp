//learning matrix exponentiation from a spoj question

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000000

ll k;
vector<ll> a, b, c;

vector<vector<ll>> multiply(vector<vector<ll>> A, vector<vector<ll>> B)
{	//storing the result
	vector < vector<ll>> C(k + 1, vector<ll>(k + 1));
	//logic to multiply the matrix
	for (int i = 1; i <= k; i++)
	{
		for (int j = 1; j <= k; j++)
		{
			for (int x = 1; x <= k; x++)
			{
				C[i][j] = (C[i][j] + (A[i][x] * B[x][j]) % MOD) % MOD;
				//doing MOD to avoid overflow and also it is mentioned in the question
			}
		}
	}
	return C;
}

vector<vector<ll>> pow(vector<vector<ll>> A, ll p)
{
	//base case
	if (p == 1)
	{
		return A;
	}
	//power is odd
	if (p & 1)
	{
		return multiply(A, pow(A, p - 1));
	}
	vector<vector<ll>> X = pow(A, p / 2);
	return multiply(X, X);
}


ll compute(ll n)
{
	if (n == 0)
	{
		return 0;
	}
	if (n <= k)
	{
		return b[n - 1];
	}

	//using matrix exponentiation in else case

	vector<ll> F1(k + 1);
	//indexing from 1
	//Step-1
	for (int i = 1; i <= k; i++)
	{
		F1[i] = b[i - 1];
	}

	//Step-2 transformation matrix

	vector<vector<ll>> T(k + 1, vector<ll>(k + 1)); // 2D vector
	for (int i = 0; i <= k; i++)
	{
		for (int j = 0; j <= k; j++)
		{
			if (i < k)
			{
				//fill 0's and 1's
				if (j == i + 1)
				{
					T[i][j] = 0;
				}
				else
				{
					T[i][j] = 1;
				}
			}
			else
			{
				T[i][j] = c[k - j]; // putting last row in reverse order
			}
		}
	}

	//Step-3 compute the power of transformation matrix
	T = pow(T, n - 1);

	//Step-4 Multiply the matrix with a vector

	ll res = 0;
	for (int i = 0; i <= k; i++)
	{
		res = (res + (T[1][i] * F1[i]) % MOD) % MOD;
	}
	return res;




}

int main()
{


	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll t, n, num;

	cin >> t;
	while (t--)
	{
		cin >> k;

		//init vector F1

		for (int i = 0; i <= k; i++)
		{
			cin >> num;
			b.push_back(num);
		}

		//coefficeints

		for (int i = 0; i <= k; i++)
		{
			cin >> num;
			c.push_back(num);
		}

		//the value of n

		cin >> n;
		cout << compute(n) << endl;

		//clearing the vectors

		b.clear();
		c.clear();
	}
}