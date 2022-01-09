#include<bits/stdc++.h>
using namespace std;

int main()
{

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	float x = 1.0;
	//x denotes the number of people having same birthday

	int people = 0;

	int num = 365;
	int den = 365;

	float p; cin >> p;

	if (p == 1.0)
	{
		cout << "365" << endl;
		return 0;
	}

	while (x > 1 - p)
	{
		x = x * (num ) / den;
		num--;
		people++;

		cout << "People " << people << " And x " << x << endl;
	}


}