//time complexity -> O(N)
//space complexity -> O(N)

#include<bits/stdc++.h>
#define inf 1e9
using namespace std;

int solve(vector<int> ar, int n)
{
	vector<int> dp(n + 1);

	//base case
	dp[1] = 0;
	for (int i = 2; i <= n; i++)
	{
		int option1 = abs(ar[i] - ar[i - 1]) + dp[i - 1];
		int option2 = (i == 2) ? inf : abs(ar[i] - ar[i - 2]) + dp[i - 2];
		dp[i] = min(option1, option2);
	}
	return dp[n];
}

int main()
{
	int n;
	cin >> n;
	vector<int> ar(n + 1);
	for (int i = 1; i <= n; i++)
	{
		cin >> ar[i];
	}
	cout << solve(ar, n) << endl;
	return 0;
}