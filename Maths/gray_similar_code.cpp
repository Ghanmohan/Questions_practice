#include <bits/stdc++.h>

#define ll unsigned long long int
#define M 1000000007

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	ll n;
	cin >> n;

	vector<ll> a(n);

	for (ll i = 0; i < n; ++i)
		cin >> a[i];

	if (n >= 130)
		cout << "Yes\n";
	else {

		for (int i = 0; i < n; ++i)
			for (int j = i + 1; j < n; ++j)
				for (int k = j + 1; k < n; ++k)
					for (int l = k + 1; l < n; ++l)
						if ((a[i] ^ a[j] ^ a[k] ^ a[l]) == 0) {

							cout << "Yes\n";
							return 0;
						}

		cout << "No\n";
	}

	return 0;
}