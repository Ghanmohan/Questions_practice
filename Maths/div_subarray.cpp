//calculating the subarray and adding the sum using the pigeon hole principle


#include<bits/stdc++.h>
using namespace std;

#define ll long long
ll a[1000005], pre[1000005];

int main()
{

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		memset(pre, 0, sizeof(pre)); // setting the initial value
		pre[0] = 1;

		//reading the input
		//Important part is adding the sum and taking the mod

		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			sum += a[i];
			sum %= n;              //meaning of this and the line below is same
			sum += (sum + n) % n;  // is included to avoid negative numbers
			pre[sum]++;
		}

		ll ans = 0;
		// accomodating all the elements for sum

		for (int i = 0; i < n; i++)
		{
			int m = pre[i];
			ans += (m) * (m - 1) / 2;
		}
		cout << ans << endl;
	}
	return 0;

}