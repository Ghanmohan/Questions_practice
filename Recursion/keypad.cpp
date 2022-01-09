#include<bits/stdc++.h>
using namespace std;

char keypad[][10] = {"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};
void generate_names(char *in, char *out, int i, int j)
{
	//base case
	if (in[i] == '\0')
	{
		out[j] == '\0';
		cout << out << endl;
		return;
	}

	//recursive case
	//important case to to get the value of the number
	int digit = in[i] - '0';

	//special case for 1 and 0 coz they are mapped with null
	if (digit == 1 or digit == 0)
	{
		generate_names(in, out, i + 1, j);
	}

	//iterating over the characters
	for (int k = 0; keypad[digit][k] != '\0'; k++)
	{
		out[j] = keypad[digit][k];
		generate_names(in, out, i + 1, j + 1);
	}
	return ;

}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	char in[1000];
	cin >> in;

	char out[1000];
	generate_names(in, out, 0, 0);
	return 0;
}