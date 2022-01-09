// the question is that we have to have sell the wines in an array starting from both the sides
//and through each year the prices of the wines become year times i.e in the second year all the
//prices would be multiplied with 2 and so on.
//We have to calculate the maximum profit after selling the wines.

//In this question top down appraoch is easy and bottom up is difficult because
//we have to fill the array diagnol wise in bottom up

#include<bits/stdc++.h>
using namespace std;

//top down approach
int profit(int wines[], int i, int j, int y)
{
	//Base case
	//the array finishes or we can say that the left and right elements surpasses each other.
	if (i > j)
	{
		return 0;
	}
	//rec case
	int op1 = wines[i] * y + profit(wines, i + 1, j, y + 1);
	int op2 = wines[j] * y + profit(wines, i, j - 1, y + 1);

	return max(op1, op2);
}

//time complexity is reduced in this approach to O(N^2)
//because we are filling the dp array
int profit_dp(int wines[], int i, int j, int y, int dp[][100])
{
	//Base case
	//the array finishes or we can say that the left and right elements surpasses each other.
	if (i > j)
	{
		return 0;
	}

	//look up case
	if (dp[i][j] != 0)
	{
		return dp[i][j];
	}

	//rec case
	int op1 = wines[i] * y + profit_dp(wines, i + 1, j, y + 1, dp);
	int op2 = wines[j] * y + profit_dp(wines, i, j - 1, y + 1, dp);

	return dp[i][j] = max(op1, op2);

}

int main()
{
	int wines[] = {2, 3, 5, 1, 4};
	//the answer is 50 and if use the greedy strategy the answer will be 49
	//so not using the greedy strategy
	int n = sizeof(wines) / sizeof(int);
	int y = 1;
	int dp[100][100] = {0};
	cout << profit(wines, 0, n - 1, y) << endl;
	cout << profit_dp(wines, 0, n - 1, y, dp) << endl;
	return 0;
}