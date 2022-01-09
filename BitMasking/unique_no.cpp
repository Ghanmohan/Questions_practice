//only one unique number is present

#include<bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int n;
	cin >> n;

	int no;
	int ans = 0; a

	for (int i = 0; i < n; i++)
	{
		cin >> no;
		ans = ans ^ no;
	}
	cout << "Unique number is " << ans << endl;

}