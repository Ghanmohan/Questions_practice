#include<bits/stdc++.h>
using namespace std;

bool isOdd(int n) //checking the value of last bit to find odd or even
{
	return (n & 1);
}

int getbit(int n, int i) //getting a particular bit of a number
{
	int mask = (1 << i);
	int bit = (n & mask) > 0 ? 1 : 0; // usage of ? (important)
	return bit;
}

int setbit(int n, int i) // set a particular bit
{
	int mask = (1 << i);
	int ans = n | mask;
	return ans;
}

void clearbit(int &n, int i) { //clear a particular bit
	int mask = ~(1 << i);
	n = n & mask;
}

void update_bit(int &n, int i, int v) // revise -> first clear the bit and then set it
{
	int mask = ~(1 << i);
	int updated_n = n & mask;
	n = updated_n | (v << i);
}

int clearbits(int n, int i) { // clear a particular bit
	int mask = (~1 << i);
	return (n & mask);
}

int clearRange(int n, int i, int j) { // clear bits in particular range from i to j
	int ones = (~0);
	int a = ones << (j + 1);
	int b = (1 << i) - 1;
	int mask = a | b;
	int ans = n & mask;
	return ans;
}

int main() {

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int n = 15;
	int i = 3; // using i from (i+1) to 0
	// clearbit(n, i);

	/*update_bit(n, 2, 0);
	update_bit(n, 3, 1);
	cout << n << endl;*/

	/*cin >> i;
	cout << isOdd(n) << endl;
	cout << getbit(n, i) << endl;
	n = setbit(n, i);
	cout << "Ans: " << n << endl;


	cout << n << endl;*/

	cout << clearbits(n, i);
}
