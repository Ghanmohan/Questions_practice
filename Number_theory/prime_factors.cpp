//prime factorisation using the optimized approach
// complexity is O(root n)

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define pb push_back


void printfactors(int n)
{
	vector<pair<int, int>> factors;
	int cnt;

	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			//keeps on dividing until not divisible
			cnt = 0;
			while (n % i == 0)
			{
				cnt++;
				n = n / i;
			}
			factors.pb(make_pair(i, cnt));
		}
	}
	if (n != 1)
	{	//whatever is left is prime numbers
		factors.pb(make_pair(n, 1));
	}
//printing the prime factors

	for (auto p : factors)
	{
		cout << p.first << "^" << p.second << endl;
	}

}



int main()
{

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int n; cin >> n;
	printfactors(n);
	return 0;
}