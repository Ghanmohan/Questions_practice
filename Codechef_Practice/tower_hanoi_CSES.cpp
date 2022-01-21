#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

void swap(int a, int b , int c, int n)
{
	if (n == 0)
	{
		return;
	}

	swap(a, c, b, n - 1);
	cout << a << ' ' << c << endl;
	swap(b, a, c, n - 1);
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	cout << (1 << n) - 1 << endl;
	swap(1, 2, 3, n);
	return 0;
}