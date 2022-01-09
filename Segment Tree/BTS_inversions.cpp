//trying to find the inversion
//inversions are where i<j and a[i]>a[j]
//first approach is the brute force method traverse the array using 2 for loops from the end of the array
//the time complexity is O(n^2) in the brute force method
//Second method is to use divide and conquer alg
//third is using the fenwick tree approach

#include<bits/stdc++.h>
using namespace std;

int a[10000];
int BIT[10000] = {0};

//Cumulative sum query BIT

void update(int i, int inc, int N)
{
	while (i <= N)
	{
		BIT[i] += inc;
		i += (i & (-i));
	}
}

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
	//Building the tree

	int n; cin >> n;
	for (int i = 1; i < n; i++)
	{
		cin >> a[i];
	}

	//inversion count

	int ans = 0;
	for (int i = n; i >= 1; i--)
	{
		ans += query(a[i] - 1);
		update(a[i], 1, n);
	}
	cout << ans << endl;
	return 0;

}

