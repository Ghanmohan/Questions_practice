/*Given a wall of size 4 X N and tiles of size (1,4) and (4,1).
How many ways we can build the wall ?
*/

#include<bits/stdc++.h>
using namespace  std;

int tiles(int n)
{
	//base cases

	if (n < 1)
	{
		return 0;
	}

	if (n <= 3) {
		return 1;
	}
	if (n == 4)
	{
		return 2;
	}

	//recursive case

	return tiles(n - 1) + tiles(n - 4);

}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	cout << tiles(n) << endl;
	return 0;
}