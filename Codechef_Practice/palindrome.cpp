#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int x)
{
	if (x < 0 or (x % 10 == 0 and x != 0))
	{
		return false;
	}
	int num = 0;
	while (x > num)
	{
		num = (num * 10) + (x % 10);
		x = x / 10;
	}
	return x == num or x == num / 10;
}

int main()
{
	int x;
	cin >> x;
	cout << isPalindrome(x) << endl;
	return 0;
}