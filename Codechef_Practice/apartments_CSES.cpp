#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define pb push_back

using namespace std;

const int MAX_N = 2e5;

int n, m, k, a[MAX_N], b[MAX_N], ans;

void solve()
{
	cin >> n >> m >> k;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < m; i++)
		cin >> b[i];
	sort(a, a + n);
	sort(b, b + m);
	int i = 0, j = 0;
	while (i < n and j < m)
	{
		//condition for a suitable apartment
		if (abs(a[i] - b[j]) <= k)
		{
			++i; ++j;
			++ans;
		}
		else
		{	//agr apartment jyada bda hai toh pointer ko right trf bda diya
			if (a[i] - b[j] > k)
				j++;
			else//agr jyada chota hai toh skip kiya and next person pai try kiya
				++i;
		}

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