#include<bits/stdc++.h>
using namespace std;


int main()
{

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t1 = 0, t2 = 1, nextTerm = 0, n;

	cout << "Enter a positive number: ";
	cin >> n;

	// displays the first two terms which is always 0 and 1 in fibonacci series

	cout << "Fibonacci Series: " << t1 << " " << t2 << " ";

	nextTerm = t1 + t2;

	while (nextTerm <= n) {
		cout << nextTerm << " ";
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	return 0;

}