//time complexity is O(N*K)

#include<bits/stdc++.h>
#define inf 1e9
using namespace std;

int solve(vector<int> ar, int n, int k)
{
	vector<int> dp(n + 1);

	//base case
	dp[1] = 0;
	for (int i = 2; i <= n; i++)
	{
		dp[i] = inf;
		for (int j = i - 1; j >= 0 && (j <= k); j--)
		{
			dp[i] = min(dp[i], abs(ar[i] - ar[j]) + dp[j]);
		}
	}
	return dp[n];
}

int main()
{
	int n, k;
	cin >> n >> k;
	vector<int> ar(n + 1);
	for (int i = 1; i <= n; i++)
	{
		cin >> ar[i];
	}
	cout << solve(ar, n, k) << endl;
	return 0;
}