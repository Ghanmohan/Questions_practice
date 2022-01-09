#include <bits/stdc++.h>
#define NEWLINE cout<<endl;
using namespace std;

int mod = 1e9 + 7;
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	while (t--) {
		long long int n;
		cin >> n;
		string ans = "";
		for (int i = 0; i < n; i++) {
			ans += '7';
		}
		cout << ans << endl;
	}

}