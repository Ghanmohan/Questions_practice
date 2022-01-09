/*the question asks that we are allowed to move the disk from A to C and the main condition is that
the large disk should alsways be below the the smaller disk */

//The output is containing all the steps that are included in the process and the number can be counted


#include<bits/stdc++.h>
using namespace std;

void move(int n, char src, char helper, char dest)
{
	//base case

	if (n == 0)
	{
		return;
	}

	//recursive case
	//moving n-1 disc from src to helper
	move(n - 1, src, dest, helper);
	cout << "Shift disc " << n << "from " << src << "to " << dest << endl;
	move(n - 1, helper, src, dest);
}



int main()
{

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	move(n, 'A', 'B', 'C');
	return 0;
}