#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define l long
#define endl "\n"
#define mod 1e9+7
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, answer = 1;
	cin >> n;

	while (n--)
	{
		answer <<= 1;
		answer %= (int(mod));
	}
	cout << answer << endl;
	return 0;
}