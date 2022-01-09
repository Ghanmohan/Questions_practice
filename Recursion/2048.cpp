//converting the numbers to the words using the recursion appraoch
//Approach is that we divide the number and then again divide the number till we get the modulo 0
// and then we print the number from the bottom up approach
#include<bits/stdc++.h>
using namespace  std;

char words[][10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void printspellings(int n) {
	//base case
	if (n == 0) {
		return;
	}

	//recursive case
	//first printing the spelling of 204 and then the remaining number
	printspellings(n / 10);
	int digit = n % 10;
	cout << words[digit] << " ";
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
	printspellings(n);
}