/*update the value of a particular index in the given array using the segmented tree which is implemented
using the divide and conquer algorithm
In this question we will change the value from bottom up manner.*/
#include<bits/stdc++.h>
using namespace std;



//order of case is also important as the first case should be the out of bounds case only
void updateRange(int *tree, int ss, int se, int l, int r, int increament, int index)
{
	//out of bounds
	if (l > ss or r < se)
		return;

	//case of complete overlap
	if (ss == se)
	{
		tree[index] += increament;
	}

	//recursive case
	int mid = (ss + se) / 2;
	updateRange(tree, ss, mid, l, r, increament, 2 * index);
	updateRange(tree, mid + 1, se, l, r, increament, 2 * index + 1);
	tree[index] = min(tree[2 * index], tree[2 * index + 1]);
}

// time complexity->O(logN)
// because it is same as the query search
void updateNode(int *tree, int ss, int se, int i, int increament, int index)
{
	//Case where the I is out of bounds
	if (i > ss or i < se)
		return;

	//leaf node case or we could say the base case
	if (ss == se)
	{
		tree[index] += increament;
		return;
	}

	//all the left cases or THE MAIN CASE
	int mid = (ss + se) / 2;
	updateNode(tree, ss, mid, i, increament, 2 * index);
	updateNode(tree, mid + 1, se, i, increament, 2 * index + 1);
	tree[index] = min(tree[2 * index], tree[2 * index + 1]);
}


/*time complexity-> O(n)*/
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


/*
time complexity-> O(logN)
cause the tree contains logN branches*/
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


	//update

	updateNode(tree, 0, n - 1, 3, +10, 1);

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