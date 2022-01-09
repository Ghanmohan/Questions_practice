//question is that we have determine the minimum number of coins to complete the amount
//using the greedy approach

#include<bits/stdc++.h>
using namespace std;

int make_change(int *coins, int n, int money)
{
	int ans = 0;
	while (money > 0)
	{
		//usage of upper bound instead of linear search to make the code more optimised
		int idx = upper_bound(coins, coins + n, money) - 1 - coins; //calculating the idx of the coins
		// cout << coins[idx] << " + ";
		money = money - coins[idx];
		ans++;
	}
	return ans;
}


int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int money;
	cin >> money;
	int coins[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
	int t = sizeof(coins) / sizeof(int);
	cout << "Coins needed are: " << make_change(coins, t, money) << endl;
	return 0;

}
