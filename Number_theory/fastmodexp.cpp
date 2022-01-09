#include<bits/stdc++.h>
#define ll long long
using namespace std;



int fastmodexp ( int a, int b)
{
	int res = 1;
	while (b > 0)
	{
		if (b & 1)
		{
			res = (res * a) ;
		}
		a = (a * a) ;
		b >> 1;
	}
	return res;
}

int main()
{


	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t; cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;
		cout << fastmodexp(a, b) << endl;
	}
	return 0;

}

