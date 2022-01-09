// You are given two 32 bit number,N and M, and two bit positions, i and j.
// Write a method to set all the bits between i and j in N to M.
//Example:
/* Input: N: 10000000000
M:10101, i=2, j=6,
Output: N:1001010100 */

#include<bits/stdc++.h>
using namespace std;

int clearRange(int n, int i, int j) { // clear bits in particular bit
	int ones = (~0);
	int a = ones << (j + 1);
	int b = (1 << i) - 1;
	int mask = a | b;
	int ans = n & mask;
	return ans;
}

int replace_bits(int n, int m, int i, int j) {
	int n_ = clearRange(n, i, j);
	int ans_2 = n_ | (m << i);
	return ans_2;
}

int main() {

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n = 15;
	int m = 2;
	int i = 1;
	int j = 3;
	cout << replace_bits(n, m, i, j) << endl;
	return 0;
}