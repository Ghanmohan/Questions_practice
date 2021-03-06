#include<bits/stdc++.h>
using namespace std;

struct  activity
{
	int A, B, C;
};

int solve(vector<activity> ar, int n)
{
	int dp[n+1][3];

	 dp[1][0]=ar[0].A;
	 dp[1][1]=ar[0].B;
	 dp[1][2]=ar[0].C;

	for ( int i=2;i<=n;i++)
	{
		dp[i][0] = ar[i].A + max(dp[i-1][1], dp[i-1][2]);
		dp[i][0] = ar[i].B + max(dp[i-1][0], dp[i-1][2]);
		dp[i][0] = ar[i].C + max(dp[i-1][0], dp[i-1][1]);
	}
	return max(dp[n][0], max(dp[n][1], dp[n][2]));
}

int main()
{
	int n;
	cin>>n;
	vector<activity> ar(n+1);
	for(int i=1;i<=n;i++)
	{
		cin>>ar[i].A;
		cin>>ar[i].B;
		cin>>ar[i].C;
	}
	cout<<solve(ar,n)<<endl;
	return 0;
}
