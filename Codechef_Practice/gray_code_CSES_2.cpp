#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

vector<string> solve(int n)
{
	if (n <= 0)
	{
		return ("0");
	}
	if (n == 1)
	{
		return ("0", "1");
	}
	//recursive case

	vector<string> rres = solve(n - 1);
	vector<string> mres;

	//adding 0 to the first half
	for (ll int i = 0; i < rres.size(); i++)
	{
		string s = rres[i];
		mres.pb("0" + s);
	}
	for (ll int i = rres.size() - 1; i >= 0; i--)
	{
		string s = rres[i];
		mres.pb("1" + s);
	}
	return mres;
}

void generatebits(int n)
{
	vector<string> arr;
	arr = solve(n);

	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll int n; cin >> n;
	generatebits(n);
	return 0;
}