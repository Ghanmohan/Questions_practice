/*question states that we have to search an element using binary search in a sorted but rotated array

*/


#include<bits/stdc++.h>
using namespace std;

int find(int *a, int n, int key)
{
	int s = 0;
	int e = n - 1;
	while (s <= e)
	{
		int mid = (s + e) / 2;
		if (a[mid] == key)
		{
			return mid;
		}
		else if (a[s] <= a[mid])
		{
			// 2 cases-> if the element lies on the left or the right side
			if (key >= a[s] and key <= a[mid])
			{
				e = mid - 1;
			}
			else
			{
				s = mid + 1;
			}
		}
		else
		{
			if (key >= a[mid] and key <= a[e])
			{
				s = mid + 1;
			}
			else
			{
				e = mid - 1;
			}
		}
	}
	return -1;
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
	int a[100000];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int key;
	cin >> key;

	cout << find(a, n, key) << endl;
	return 0;
}