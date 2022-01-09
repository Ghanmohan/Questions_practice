//question is generating a string with the number and their corresponding letters
//Main thing to do is to contain 0 in the string without any error

#include<bits/stdc++.h>
using namespace std;

void generate_strings(char *in, char *out, int i, int j)
{
	//base case
	if (in[i] == '\0') {
		out[j] = '\0';
		cout << out << endl;
		return;
	}

	//recursive case

	//taking 1 digit
	int digit = in[i] - '0';
	char ch = digit + 'A' - 1; //important way to generate the the LETTER of the number
	out[j] = ch;
	generate_strings(in, out, i + 1, j + 1);

	//taking 2 digit
	if (in[i + 1] != '\0')
	{
		int seconddigit = in[i + 1] - '0';
		int no = digit * 10 + seconddigit;
		if (no <= 26)
		{
			ch = no + 'A' - 1;
			out[j] = ch;
			generate_strings(in, out, i + 2, j + 1); //i+2 because we are taking the index of two digits

		}
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

	char in[100];
	cin >> in;

	char out[100];
	generate_strings(in, out, 0, 0);
}
