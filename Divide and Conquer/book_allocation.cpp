/*In this question M stands for the book and n stands for the person reading them. the array
contains the number of pages to be read. We have to find the minimum pages to be read by a single
person with the second person also */

#include<bits/stdc++.h>
using namespace std;

bool Possible(int *a, int n, int m, int curr_min)
{
	int student_used = 1;
	int pages_reading = 0;

	for (int i = 0; i < n; i++)
	{
		if (pages_reading + a[i] > curr_min)
		{
			student_used++;
			pages_reading = a[i];

			if (student_used > m)
			{
				return false;
			}
		}
		else
		{
			pages_reading += a[i];
		}
	}
	return true;
}

int findpages(int *a, int n, int m)
{
	int sum = 0;

	//checking the first constraint
	if (n < m)
	{
		return -1;
	}

	//counting the number of pages
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
	}

	int s = a[n - 1];
	int e = sum;
	int ans = INT_MAX; //macro specifying that ans cannot store value greater than the limit

	while (s <= e)
	{
		int mid = (s + e) / 2;

		if (Possible(a, n, m, mid))
		{
			ans = min(ans, mid);
			e = mid - 1;
		}
		else
		{
			//if it is not possible to divide and is greater than x
			//increase the number of pages
			s = mid + 1;
		}
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

	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;

		int arr[1000];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		cout << findpages(arr, n, m) << endl;
	}
	return 0;
}
