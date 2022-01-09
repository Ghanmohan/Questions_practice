/*solving the climbing ladder problem but not with a specific case but (n,k) where the n is the
number of ways and k is the maximum number of steps that can be climbed at once*/

#include<bits/stdc++.h>
using namespace std;

int modefied_ladder(int n, int k)
{
	//base case
	if (n == 0)
	{
		return 1;
	}
	if (n < 0)
	{
		return 0;
	}

	//recursive case
	int ans = 0;

	for (int i = 1; i <= k; i++) {
		ans += modefied_ladder(n - i, k);
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

	int n, k;
	cin >> n >> k;
	cout << modefied_ladder(n, k) << endl;
	return 0;

}