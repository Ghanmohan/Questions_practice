#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll int n; cin >> n;
	ll int arr[n];
	for (ll int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	ll int total = 0, m = arr[0];
	for ( ll int i = 1; i < n; i++)
	{
		total += max(0LL, m - arr[i]);
		m = max(m, arr[i]);
	}
	cout << total;
	return 0;

}