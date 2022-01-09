//two diffrent unique numbers are available

#include<bits/stdc++.h>
using namespace std;

int main()
{


	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	int no;
	int a[100005];
	int res = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> no;
		a[i] = no;
		res = res ^ no;
	}
	//x=a^b; where a and b are unique numbers
	//res -> stores both the unique numbers

	int temp = res;
	int pos = 0;
	while ((temp & 1) != 1)
	{
		pos++;
		temp = temp >> 1;
	}
	//The first bit in xor is at position 'pos'
	int mask = (1 << pos);

	//finding those numbers which contain setbit at position 'pos'
	int x = 0;
	int y = 0;

	for (int i = 0; i < n; i++)
	{
		if ((a[i]&mask) > 0)
		{
			x = x ^ a[i];
		}

		y = res ^ x;
		cout << min(x, y) << " " << max(x, y) << endl;
	}

}