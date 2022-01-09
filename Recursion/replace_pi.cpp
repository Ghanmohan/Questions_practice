//finding the string PI and replacing it with 3.14 using the recusion function
//the important part in this question is to create space with for additional 2 characters and
//shifitng the rest all together

#include<bits/stdc++.h>
using namespace std;


void replacePI(char a[], int i) {

	//base case
	if (a[i] == '\0' or a[i + 1] == '\0')
	{
		return ;
	}

	//look for PI at current location
	if (a[i] == 'p' and a[i + 1] == 'i')
	{
		//shifting +replacement with 3.14
		int j = i + 2;

		//taking j to the end of the array
		while (a[j] != '\0')
		{
			j++;
		}

		//shifting(right to left)
		//very very important step
		while (j >= i + 2) {
			a[j + 2] = a[j];
			j--;
		}

		//printing
		a[i] = '3';
		a[i + 1] = '.';
		a[i + 2] = '1';
		a[i + 3] = '4';

		//because our next pointer start from the i+4
		replacePI(a, i + 4);
	}
	else
	{
		//go to the next character and check for PI
		replacePI(a, i + 1);
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

	char a[1000];
	cin >> a;
	replacePI(a, 0);
	cout << a << endl;
	return 0;
}