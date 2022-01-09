#include<bits/stdc++.h>
using namespace std;

int countswap(string s)
{
	int n = s.length();
	int count = 0;

	for (int i = 0; i < n / 2; i++)
	{
		int left = i; //left pointer

		int right = n - left - 1; // right pointer


		//loops which runs from left to right

		while (left < right)

			// if both the characters are same break else increase the counter
		{
			if (s[left] == s[right])
			{
				break;
			}
			else
			{
				right--;
			}
		}

		if (left == right) // if not possible to find the palidrome
		{
			return -1;
		}


		// else swap the value and increase the count

		for (int j = right; j < n - left - 1; j++)
		{
			swap(s[j], s[j + 1]);
			count ++;
		}
	}

	return count;

}

int main()
{

	string s;
	cin >> s;

	int ans1 = countswap(s);

	/*reverse(s.begin(), s.end());

	int ans2 = countswap(s);*/
	cout << ans1 << endl;

	return 0;

}