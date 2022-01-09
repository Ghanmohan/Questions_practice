//divide and conquer algorithm

#include<bits/stdc++.h>
using namespace std;


double pow(int a, int n)
{
	if (n == 0)
	{
		return 1;
	}

	//to divide into subparts and calculating

	double subpow = pow(a, n / 2);

	if (n & 1)
	{
		return a * subpow * subpow;
	}

	else
	{
		return subpow * subpow;
	}
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	double a, n;
	cin >> a >> n;
	cout << pow(a, n) << endl;
}