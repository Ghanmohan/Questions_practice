//the question states that we have to find the minimum number of coins to reach the given
//amount. The greedy approach is not suitable because it only works for indian currency.

#include<bits/stdc++.h>
using namespace std;
//time complexity of both the approaches is O(T*N)


//Bottom-up approach
int min_coins_BU(int N, int coins[], int T)
{
	int dp[100] = {0};

	//iterate over all the elements
	for (int n = 1; n <= N; n++)
	{
		//Initialize the current ans as INT_MAX
		dp[n] = INT_MAX;

		for (int i = 0; i < T; i++)
		{
			if (n - coins[i] >= 0)
			{
				int subprob = dp[n - coins[i]];
				dp[n] = min(dp[n], subprob + 1);
			}
		}
	}
	return dp[N];
}


//Top-Down Approach
int min_coins(int n, int coins[], int T, int dp[])
{
	//Base case
	if (n == 0)
	{
		return n;
	}

	//Lookup case
	if (dp[n] != 0)
	{
		return dp[n];
	}

	//recursive case
	int ans = INT_MAX;
	for (int i = 0; i < T; i++)
	{
		if (n - coins[i] >= 0)
		{
			int subprob = min_coins(n - coins[i], coins, T, dp);
			ans = min(ans, subprob + 1);
		}
	}
	dp[n] = ans;
	return ans;
}

int main()
{
	int N;
	cin >> N;
	int coins[] = {1, 7, 10};
	int T = sizeof(coins) / sizeof(int);
	int dp[100] = {0};

	// cout << min_coins(N, coins, T, dp) << endl;
	cout << min_coins_BU(N, coins, T) << endl;
	return 0;
}