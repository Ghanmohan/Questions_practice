//using the coupon collector concept for solve the problem

#include<bits/stdc++.h>
using namespace  std;

int main()
{

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	int n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		double ans = 0;

		for (int i = 1; i <= n; i++)
		{
			ans += n / (i * 1.0);
		}
		cout << fixed << setprecision(6) << ans << endl;
	}
	return 0;
}