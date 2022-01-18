#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	long long int n, sum = 0, number;
	cin >> n;
	for (int i = 0; i < n - 1; i++)
	{
		cin >> number;
		sum += number;
	}
	cout << n*(n + 1) / 2 - sum;
	return 0;
}