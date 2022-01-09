#include<bits/stdc++.h>
using namespace std;


void generate_substring(char *in, char *out, int i, int j)
{
	//base case
	if (in [i] == '\0')
	{
		out[j] = '\0';
		cout << out << endl;
		return;
	}

	//recursive case
	//include the current char
	out[j] = in[i];
	generate_substring(in, out, i + 1, j + 1);

	//exclude the current char
	generate_substring(in, out, i + 1, j);
}

int main()
{


	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	char input[] = "abc";
	char output[10];
	generate_substring(input, output, 0, 0);
	return 0;
};