#include<bits/stdc++.h>
using namespace std;

int max_sum(int a[], int n)
{
	int dp[100] = {0};
	dp[0] = a[0] > 0 ? a[0] : 0;
	int max_so_far = dp[0];

	for (int i = 1; i < n; i++)
	{
		dp[i] = dp[i - 1] + a[i];
		if (dp[i] < 0)
		{
			dp[i] = 0;
		}
		max_so_far = max(dp[i], max_so_far);
	}
	return max_so_far;
}

//space optimzed approach
//kadanes algorithm

int max_sum_spaceOpt(int a[], int n)
{
	int current_sum = 0;
	int max_so_far = 0;

	for (int i = 0; i < n; i++)
	{
		current_sum += a[i];
		if (current_sum < 0)
		{
			current_sum = 0 ;
		}
		max_so_far = max(current_sum, max_so_far);
	}
	return max_so_far;
}

int main()
{
	int arr[] = { -3, 2, 5, -1, 6, 3, -2, 7, -5, 2};
	int n = sizeof(arr) / sizeof(int);
	// cout << max_sum(arr, n) << endl;
	cout << max_sum_spaceOpt(arr, n) << endl;
	return 0;
}