#include<bits/stdc++.h>
#define ll long long
using namespace std;;

void solve(int n)
{
	for (ll int i = 0; i < (1 << n); i++)
	{
		ll int val = (i ^ (i << 1));

		bitset<32> r(val);

		//converting the string
		string s = r.to_string();
		cout << s.substr(32 - n) << " " << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll int n; cin >> n;
	solve(n);
	return 0;

}