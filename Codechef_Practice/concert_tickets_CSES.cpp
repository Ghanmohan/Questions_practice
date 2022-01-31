#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define pb push_back

using namespace std;
int n, m, h, t;
multiset<int> tickets;

void solve()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> h;
		tickets.insert(h); //inserting in multiset method
	}
	for (int i = 0; i < m; i++)
	{
		cin >> t;
		auto it = tickets.upper_bound(t);
		if (it == tickets.begin())
		{
			cout << "-1" << endl;
		}
		else
		{
			cout << *(--it) << endl;
			tickets.erase(it);
		}
	}
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