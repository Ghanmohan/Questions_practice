#include<bits/stdc++.h>
using namespace std;

long long int power_bits(int a, int n)
{
	int ans = 1;
	while (n > 0) // taking 1 and skipping 0
	{
		long long int l_bit = (n & 1); // get the last bit
		if (l_bit)	//
		{
			ans = ans * a;
		}
		a = a * a; //squaring the number
		n = n >> 1; //right shifting the bit
	}
	return ans;
}

int main()
{

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	long long int n, a;
	cin >> a >> n;
	cout << power_bits(a, n) << endl;

}