#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	//Array of fixed size taking O(1) space
	int cnt[64] = {0};
	int n, no;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> no;
		//update the cnt array by extracting the bits
		while (no > 0)
		{
			int j;
			int last_bit = (no & 1);
			cnt[j] += last_bit;
			j++;
			no = no >> 1;
		}
	}
	//iterate over the array and form the number from 0s and 1s
	int p = 1;
	int ans = 0;
	for (int i = 0; i < 64; i++)
	{
		cnt[i] %= 3;
		ans += (cnt[i] * p);
		p = p << 1; // can also be written as p=p<<1;
	}
	cout << ans << endl;
}