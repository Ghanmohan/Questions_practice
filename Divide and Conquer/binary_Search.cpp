//using binary search to search the key
//using divide and search algorithm

#include<bits/stdc++.h>
using namespace std;

int binary_Search(int *a, int n, int key)
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
		else if (a[mid] > key)
		{
			e = mid - 1;
		}
		else
		{
			s = mid + 1;
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

	int n, key;
	cin >> n;

	int a[1000];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << "Enter the element you want to search: " << endl;
	cin >> key;

	cout << binary_Search(a, n, key);

	return 0;
}