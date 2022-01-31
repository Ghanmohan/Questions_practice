#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define pb push_back
const int maxn = 2e5 + 10;

using namespace std;
ll int n, x, p[maxn], i, j, ans;

bool have_gondala[maxn];

void solve()
{
	cin >> n >> x;
	for (int i = 0; i < n; i++)
		cin >> p[i];
	sort(p, p + n);
	i = 0;
	j = n - 1;

	while (i < j)
	{
		if (p[i] + p[j] > x)
			--j;
		else
		{
			ans++;
			have_gondala[i] = have_gondala[j] = true;
			++i; --j;
		}
	}
	for (int i = 0; i < n; i++)
	{
		ans += have_gondala[i] == false;
	}
	cout << ans << endl;
}


int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	solve();
	return 0;
}