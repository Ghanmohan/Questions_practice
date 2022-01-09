#include<bits/stdc++.h>
using namespace std;

//First Method -> time complexity is O(k) k=position of set bits
int countbits(int n) {
	int ans = 0;
	while (n > 0) {
		ans += n & 1;
		n = n >> 1;
	}
	return ans;
}
//Second Methos -> time complexity is O(no of set bits)
int countbitsFast(int n) {
	int ans = 0;
	while (n > 0) {
		n = n & (n - 1);
		ans++;
	}
	return ans;

}
//Third Method -> using in build function

int main() {


	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	cout << countbits(n) << endl;
	cout << countbitsFast(n) << endl;
	cout << __builtin_popcount(n) << endl; // inbuild function usage
}
