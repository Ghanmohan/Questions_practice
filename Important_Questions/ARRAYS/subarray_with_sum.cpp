#include<bits/stdc++.h>
using namespace std;


int sumarray(int arr[], int n, int sum)
{
	int curr_sum , i, j;
	for (int i = 0; i < n; i++)
	{
		curr_sum = arr[i];

		for (j = i + 1; j <= n; j++)
		{
			if (curr_sum == sum)
			{
				cout << "Sum Found between the indexes " << i << " And " << j - 1;
				return 1;
			}
			if (curr_sum > sum || j == n)
				break;
			curr_sum = curr_sum + arr[j];

		}
	}

	cout << "No array found" << endl;
	return 0;
}

int main()
{

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int sum ; cin >> sum;
	sumarray(arr, n, sum);
	return 0;

}


