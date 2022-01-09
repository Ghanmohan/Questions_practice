//writing the query function for the lazy propogation


#include<bits/stdc++.h>
using namespace std;

int lazy[1000] = {0}; //making an initial lazy array


void updateRange(int *tree, int ss, int se, int l, int r, int increament, int index)
{
	//resolving the lazy value before going down
	if (lazy[index] != 0)
	{
		tree[index] += lazy[index];

		//non leaf node
		if (ss != se)
		{
			lazy[2 * index] += lazy[index];
			lazy[2 * index + 1] += lazy[index];
		}
		lazy[index] = 0; //remomving the laze value from the parent node
	}
	//base case
	//no overlap case
	if (ss > r or se < l)
		return;

	//another case- complete overlap
	if (ss >= l and se <= r)
	{
		tree[index] += increament;

		//create a new laze value of children node
		if (ss != se)
		{
			lazy[2 * index] += increament;
			lazy[2 * index + 1] += increament;
		}
		return;
	}

	//recursive case
	int mid = (ss + se) / 2;
	updateRange(tree, ss, mid, l, r, increament, index);
	updateRange(tree, mid + 1, se, l, r, increament, index);
	//update the index of the tree
	tree[index] = min(tree[2 * index], tree[2 * index + 1]);
	return;
}


void buildtree(int *a, int s, int e , int *tree, int index)
{
	//base case
	if (s == e)
	{
		tree[index] = a[s];
		return;
	}

	//recursive case
	int mid = (s + e) / 2;
	buildtree(a, s, mid, tree, 2 * index);
	buildtree(a, mid + 1, e, tree, 2 * index + 1);
	tree[index] = min(tree[2 * index], tree[2 * index + 1]);
}


int query(int *tree, int ss, int se, int qs, int qe, int index)
{
	//resolving the lazy value before going down
	if (lazy[index] != 0)
	{
		tree[index] += lazy[index];

		//non leaf node
		if (ss != se)
		{
			lazy[2 * index] += lazy[index];
			lazy[2 * index + 1] += lazy[index];
		}
		lazy[index] = 0; //remomving the laze value from the parent node
	}

	//query logic
	//no overlap case
	if (ss > qe or se < qs)
	{
		return INT_MAX;
	}

	//complete overlap
	if (ss >= qs and se <= qe)
	{
		return tree[index];
	}

	//partial overlap
	int mid = (ss + se) / 2;
	int left = query(tree, ss, mid, qs, qe, 2 * index);
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
	buildtree(a, 0, n - 1, tree, 1);
	updateRange(tree, 0, n - 1, 0, 2, 10, 1);
	updateRange(tree, 0, n - 1, 0, 4, 10, 1);
	cout << "query 1-1 " << query(tree, 0, n - 1, 1, 1, 1) << endl;
	updateRange(tree, 0, n - 1, 3, 4, 10, 1);
	cout << "query 3-5 " << query(tree, 0, n - 1, 3, 5, 1) << endl;
	return 0;
}