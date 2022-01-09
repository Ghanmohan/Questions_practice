/*checking the query in the tree and returning the the answer
the main part in this query is to divide the question into 3 parts
1. complete overlap: returns the value of the node
2. partial overlap: checks on both the sides of the nodes and returns the minimum value among them
3. no overlap: returns infinity of any other value depending on the type of question*/

#include<bits/stdc++.h>
using namespace std;

void buildTree(int *a, int s, int e, int *tree, int index)
{
	if (s == e)
	{
		tree[index] = a[s];
		return;
	}

	//recursive case
	int mid = (s + e) / 2;
	buildTree(a, s, mid, tree, 2 * index);
	buildTree(a, mid + 1, e, tree, 2 * index + 1);
	tree[index] = min(tree[2 * index], tree[2 * index + 1]);
	return;
}

int query(int *tree, int ss, int se, int qs, int qe, int index)
{
	//complete overlap
	if (ss >= qs and se <= qs)
	{
		return tree[index];
	}

	//no overlap
	if (qe < ss or qs > se)
	{
		return INT_MAX; //returnig the maximum possible value available in that question
	}

	//partial overlap
	int mid = (ss + se) / 2;
	int left = query(tree, ss, mid, qs, qe, 2 * index );
	int right = query(tree, mid + 1, se, qs, qe, 2 * index + 1);
	return min(left, right);
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int a[] = {1, 3, 2, -5, 6, 4};
	int n = sizeof(a) / sizeof(int);
	int *tree = new int[4 * n + 1];

	//reading a query

	int q; cin >> q;
	while (q--)
	{
		int l, r;
		cin >> l >> r;
		cout << query(tree, 0, n - 1, l, r, 1) << endl;
	}
	return 0;
}