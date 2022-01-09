//finding the square root using binary search
//using the approach of checking the square to the nearest number available and then changing the values

#include<bits/stdc++.h>
using namespace std;

float find_root(int n, int p)
{
	int s = 0;
	int e = n;

	float ans = -1;

	while (s <= e)
	{
		int mid = (s + e) >> 1; //equivalent to mid=(s+e)/2

		if (mid * mid == n)
		{
			return mid;
		}
		if (mid * mid < n)
		{
			ans = mid;
			s = mid + 1;
		}
		else
		{
			e = mid - 1;
		}
	}

	//floating part
	//getting using the brute force approach

	float inc = 0.1;
	for (int t = 1; t <= p; t++)
	{
		while (ans * ans <= n)
		{
			ans = ans + inc;
		}
		//overshot the value of ans so to get the correct value
		ans = ans - inc;
		inc = inc / 10;
	}
	return ans;
}

int main()
{

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	cout << find_root(n, 3) << endl;
	return 0;
}