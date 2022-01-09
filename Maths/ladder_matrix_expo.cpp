#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define MOD 1000000000
ll k;

vector<ll> a, b;

vector<vector<ll >> mul(vector < vector<ll> >A, vector < vector<ll>> B)
{
	vector < vector<ll>> C(k + 1, vector<ll>(k + 1));
	for (int i = 1; i <= k; i++)
	{
		for (int j = 0; j <= k; j++)
		{
			for (int x = 1; x <= k; x++)
				C[i][j] = (C[i][j] + A[i][x] * B[x][j]) % MOD;
		}
	}
	return C;
}

vector < vector<ll>> pow(vector<vector<ll>> A, ll p)
{
	if (p == 1)
		return A;
	if (p & 1)
		return mul(A, pow(A, p - 1));
	vector<vector<ll>> X = pow(A, p / 2);

	return mul(X, X);
}

ll compute(ll n)
{
	if (n == 0)
		return 0;
	if (n <= k)
		return b[n - 1];

	//determing the F1 vector
	vector<ll> F1(k + 1);
	for (int i = 1; i <= k; i++)
		F1[i] = b[i - 1];

	//creating the transformation matrix

	vector<vector<ll>> T(k + 1, vector<ll>(k + 1));
	for (int i = 1; i <= k; i++)
	{
		for (int j = 1; j <= k; j++)
		{
			if (i < k)
			{
				if (j == i + 1)
					T[i][j] = 1;
				else
					T[i][j] = 0;
			}
			else
				T[i][j] = 1;
		}
	}
	T = pow(T, n - 1);
	ll res = 0;
	for (int i = 1; i <= k; i++)
	{
		res = (res + T[1][i] * F1[i]) % MOD;
	}
	return res % MOD;
}

int main()
{


	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	//defining the test cases
	ll t, n, num;
	cin >> t;
	while (t--)
	{
		cin >> k;
		num = 1;
		for (int i = 0; i < k; i++)
		{
			b.push_back(num);
			num = num * 2;
		}
		cin >> n;
		cout << compute(n) << endl;
		a.clear();
		b.clear();
	}
}