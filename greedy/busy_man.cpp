#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int, int > p1, pair<int, int > p2)
{
	return p1.second < p2.second;
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t, n, s, e;
	cin >> t;

	vector<pair<int, int>> v;
	while (t--)
	{
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> s >> e;
			v.push_back(make_pair(s, e));
		}

		//activity selection algorithm
		//SORT

		sort(v.begin(), v.end(), compare);

		//start picking activities
		int res = 1;
		int fin = v[0].second;

		//iterating over the elements
		for (int i = 1; i < n; i++)
		{
			if (v[i].first >= fin)
			{
				fin = v[i].second;
				res++;
			}
		}
		cout << res << endl;
	}
	return 0;
}