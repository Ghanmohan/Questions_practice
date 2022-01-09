//question is that
//to get to number 1 using the min steps
// n -> n/3,n/2, n-1


//using the top down approach
#include<bits/stdc++.h>
using namespace std;

int min_steps(int n, int dp[])
{
	//base case
	if (n == 1)
	{
		return 1;
	}
	//recursive case
	//if dp[n] is already look up
	if (dp[n] != 0)
	{
		return dp[n];
	}
	int op1, op2, op3;
	op1 = op2 = op3 = INT_MAX;

	if (n % 3 == 0)
	{
		op1 = min_steps(n / 3, dp) + 1;
	}
	if (n % 2 == 0)
	{
		op2 = min_steps(n / 2, dp) + 1;
	}
	op3 = min_steps(n - 1, dp) + 1;

	//adding +1 because of the initial case taken as 0
	int ans = min(min(op1, op2), op3);
	return dp[n] = ans;
}


int main()
{
	int n;
	cin >> n;
	int dp[100] = {0};
	cout << min_steps(n, dp);
	return 0;
}