#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;

	if (n == 1)
		cout << 1 << endl;
	else if (n < 4)
		cout << "NO SOLUTION" << endl;
	else if (n == 4)
		cout << "3 1 4 2" << endl;
	else
	{
		for (int i = 1; i <= n; i += 2)
			cout << i << " ";
		for (int i = 2; i <= n; i += 2)
		{
			cout << i;
			if (i + 2 <= n)
				cout << " ";
			else
				cout << endl;
		}
	}

}