#include<bits/stdc++.h>
using namespace std;

int stringtolength(char *a, int n)
{
	//base case
	if (n == 0) {
		return 0;
	}

	//recursive case

	//important step
	// a[n-1]-'0' is done to subtract the ASCII value and get the digit
	int digit = a[n - 1] - '0'; //last digit
	int small_ans = stringtolength(a, n - 1);
	return small_ans * 10 + digit;
}

int main()
{

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	//given a string to convert to the int
	char a[] = "1234";
	int len = strlen(a);

	int x = stringtolength(a, len);
	cout << x << endl;
	cout << x + 1 << endl;//to check the above code is printing the integer
}