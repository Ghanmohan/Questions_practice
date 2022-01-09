//generating balanced brackets using recursion

#include<bits/stdc++.h>
using namespace std;

void generate_brackets(char *out, int n, int idx, int open, int close)
{
	//base case
	if (idx == 2 * n)
	{
		out[idx] = '\0';
		cout << out << endl;
		return;
	}

	//rec case
	//2 options will be used by if not else because both are important

	if (open < n)
	{
		out[idx] = '(';
		generate_brackets(out, n, idx + 1, open + 1, close);
	}
	if (close < open)
	{
		out[idx] = ')';
		generate_brackets(out, n, idx + 1, open, close + 1);
	}
	return;

}


int main()
{


	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;

	char out[1000];
	int idx = 0;

	generate_brackets(out, n, 0, 0, 0);
	return 0;

}