//spoj load balancing question

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[9000];
	int n, val;
	while (1)
	{
		int max_load = 0, load = 0;
		cin >> n;

		//stop taking the value if n=(-1)
		if (n == -1)
			break;

		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			load += a[i];
		}
		if (load % n != 0)
		{
			cout << -1 << endl;
			continue;
		}

		//finding the load that is equally divided
		load = load / n;

		int diff = 0;
		//greedy step
		for (int i = 0; i < n; i++)
		{
			//finding the diffrence between load and the remaining elements
			//taking the positive quantity among the 2 values
			diff += (a[i] - load);
			int ans = max(diff, -diff);
			max_load = max(max_load, ans);
		}
		cout << max_load << endl;

	}
	return 0;
}