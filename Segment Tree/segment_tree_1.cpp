/*Doing the basics of making a segment tree using an array and implementing it using the divide and conquer algorithm
*/

#include<bits/stdc++.h>
using namespace std;

//building a function that will create the tree from the bottom up manner and then printing it in the main function

void buildTree(int *a, int s, int e, int *tree, int index)
{
	if (s == e)
	{
		tree[index] = a[s];
		return ;
	}

	//recursive cases
	int mid = (s + e) / 2;
	buildTree(a, s, mid, tree, 2 * index);
	buildTree(a, mid + 1, e, tree, 2 * index + 1);
	tree[index] = min(tree[2 * index], tree[2 * index + 1]);
	return ;
}

int main()
{
	int a[] = {1, 3, 2, -5, 6, 4};
	int n = sizeof(a) / sizeof(int);

	int *tree = new int[4 * n + 1];
	buildTree(a, 0, n - 1, tree, 1); //starting the index from 1
	for (int i = 1; i <= 13; i++)
	{
		cout << tree[i] << " ";
	}
	return 0;
}