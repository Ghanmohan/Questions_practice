//solution is good try understanding it or get another one
//not written self
//logic smj aa gya tha ki carry mai use krna hai

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define pb push_back
#define int long long


int power(int x, unsigned int y)
{
	int res = 1;
	while (y > 0) {
		if (y & 1) {
			res = (res * x);
		}
		y = y >> 1;
		x = (x * x);
	}
	return res;
}

signed main()
{
// 	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int count = 1;
		for (int p = 9;; n -= p, count++, p = 9 * power(10, count - 1) * count)
		{
			if (n - p <= 0)
				break;
		}
		n--;
		int x = n / count;
		int y = n % count;
		int ans = power(10, count - 1) + x;
		string s = to_string(ans);
		cout << s[y] << endl;

	}
}