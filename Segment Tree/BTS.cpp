//BTS->binary indexed tree or fenwick tree
#include<bits/stdc++.h>
using namespace std;

int a[10000];
int BIT[10000] = {0};

//Range sum query question
// time complexity-> logN

void update(int i, int inc, int N)
{
	while (i <= N)
	{
		BIT[i] += inc;
		i += (i & (-i));
	}
}

//Counting the sum till nth index
//time complexity->NlogN

int query(int i)
{
	int ans = 0;
	while (i > 0)
	{
		ans += BIT[i];
		i -= (i & (-i));
	}
	return ans;
}

int main()
{
	//Building the tree and updating the elements
	int n; cin >> n;
	for (int i = 1; i < n; i++)
	{
		cin >> a[i];
		update(i, a[i], n);
	}

	//query
	int q; cin >> q;
	while (q--)
	{
		int l, r;
		cin >> l >> r;
		cout << query(r) - query(l - 1) << endl;
	}
	return 0;

}

