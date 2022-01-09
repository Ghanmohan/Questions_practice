//solving the LIS using the simpler dp method
//time complexity is O(n^2)

#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	int dp[n];

	for (int i = 0; i < n; i++)
	{
		dp[i] = 1; //every element can be at length 1 at end
		for (int j = 0; j < i; j++)
		{
			if (a[j] < a[i])
				dp[i] = max(dp[i], dp[j] + 1);
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << dp[i] << " ";
	}
}