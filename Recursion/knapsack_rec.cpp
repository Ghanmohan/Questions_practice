//the questions stats that the we have to choose the maximum price from the given prices which should be less than or
//equal to the weight available

#include<bits/stdc++.h>
using namespace std;

int profit(int n, int c, int *wt, int *prices)
{
	//base case

	if (n == 0 or c == 0)
	{
		return 0;
	}

	//recursive case

	int ans = 0;
	int inc, exc;
	inc = exc = 0;

	//excluding case
	if (wt[n - 1] <= c)
	{
		inc = prices[n - 1] + profit(n - 1, c - wt[n - 1], wt, prices);
	}
	//excluding case
	exc = profit(n - 1, c, wt, prices);

	ans = max(inc, exc);
	return ans;

}

int main()
{

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int weight[] = {1, 2, 3, 5};
	int prices[] = {40, 20, 30, 100};

	int N = 4;
	int C = 7;

	cout << profit(N, C, weight, prices);

	return 0;
}