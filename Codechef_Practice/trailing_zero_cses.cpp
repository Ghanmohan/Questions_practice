#include<bits/stdc++.h>
using namespace std;

int main()
{

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	long n, current = 5, answer = 0;
	cin >> n;

	while (current <= n)
	{
		answer += n / current;
		current *= 5;
	}
	cout << answer << endl;
	return 0;
}