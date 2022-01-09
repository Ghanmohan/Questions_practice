#include<bits/stdc++.h>
using namespace std;

void filter(int n, char a[]) // filters the characters according to the bits
{
	int j = 0;
	while (n > 0)
	{
		int last_bits = (n & 1);
		if (last_bits == 1)
		{
			cout << a[j];
		}
		j++;
		n = n >> 1;
	}
	cout << endl;
}

void printsubset(char a[]) // print the filtered characters
{
	int n = strlen(a);
	for (int i = 0; i < (1 << n); i++)
	{
		filter(i, a);
	}
	return;
}

int main()
{

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	char a[100];
	cin >> a;
	printsubset(a);

}