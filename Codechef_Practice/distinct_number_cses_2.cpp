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
	set<int> distinct;
	for (int i = 0; i < n; i++)
	{
		int num; cin >> num;
		distinct.insert(num);
	}
	cout << distinct.size() << endl;
	return 0;
}
