//nice question take care of edge cases like in diagnol

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define pb push_back

using namespace std;

char chess[8][8];
int c = 0;
bool ld[15], rd[15], row[7];


void solve(int j)
{
	if (j == 8)
	{
		c++;
		return;
	}
	for (int i = 0; i < 8; i++)
	{
		if (chess[i][j] == '.' and ld[i - j + 7] == 0 and rd[i + j] == 0 and row[i] == 0)
		{
			ld[i - j + 7] = 1, rd[i + j] = 1, row[i] = 1;
			solve(j + 1);
			ld[i - j + 7] = 0, rd[i + j] = 0, row[i] = 0;
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			cin >> chess[i][j];
		}
	}
	solve(0);
	cout << c;

}