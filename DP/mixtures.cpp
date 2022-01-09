#include<bits/stdc++.h>
using namespace std;

long long a[1000];
int dp[1000][1000];

long long sum(int s, int e)
{
	long long ans = 0;
	for (int i = s; i = < e; i++)
	{
		ans += a[i];
		ans %= 100;
	}
	return ans;
}

long long solveMixtures(int i. int j)
{
	//Base case
	if (i >= j)
	{
		return 0;
	}

	//If the answer is already there
	if (dp[i][j] = -1)
	{
		return dp[i][j];
	}

	//Calculating the answer till k
	dp[i][j] = INT_MAX;
	for (int i = k; k <= n; k++)
	{
		dp[i][j] = min(dp[i][j], solveMixtures(i, k) + solveMixtures(k + 1, j) + sum(i, k) + sum(k + 1, n));
	}
	return dp[i][j];
}


int main()
{
	return 0;
}