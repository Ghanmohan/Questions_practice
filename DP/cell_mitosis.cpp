#include<bits/stdc++.h>
using namespace std;

long long solve_cell_prob(int n, int x, int y, int z)
{
	long long *dp = new long long [n + 1];
	//bottom up DP
	dp[0] = 0;
	dp[1] = 0;

	//recursive case
	for (int i = 2; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			dp[i] = min(dp[i / 2], dp[i - 1] + y);
		}
		else
		{
			dp[i] = min(dp[i - 1], dp[(i + 1) / 2 + x + z]);
		}
	}
	return dp[n];
}

int main()
{
	int n, x, y, z;
	cin >> n >> x >> y >> z;
	cout << solve_cell_prob(n, x, y, z) << endl;
	return 0;
}