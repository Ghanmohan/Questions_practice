#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define pb push_back

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	vector<int> arr(n);

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	int ans = 1;
	for (int i = 1; i < n; i++)
	{
		ans += (arr[i] != arr[i - 1]);
	}
	cout << ans << endl;
}