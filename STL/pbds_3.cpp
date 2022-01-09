//Codeforces question
//Pair of topics
//uses the inversion count approach as we can see it after we print the ans in last line.


#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree < pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag,
        tree_order_statistics_node_update>
        PBDS;

int main()
{

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	PBDS st;
	int n; cin >> n;
	int a[n], b[n], c[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}

	for (int i = 0; i < n; i++) {
		c[i] = a[i] - b[i];
	}

	long long int ans = 0;

	for (int i = 0; i < n; i++)
	{
		ans += st.size() - st.order_of_key({ -c[i], 100000});
		st.insert({c[i], i});
	}
	cout << ans;
}
