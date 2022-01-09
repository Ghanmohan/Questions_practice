#include<iostream>
using namespace std;


int gcd(int a, int b)
{
	if (b == 0)
	{
		return a;
	}

	//recursive case
	return gcd(b, a % b);
}

int lcm(int a, int b)
{
	return a * b / gcd(a, b);
}

int x, y, GCD;
void extendedEuclid(int a, int b)
{
	if (b == 0)
	{
		x = 1;
		y = 0;
		GCD = a;
		return;  // program was not runnig due to not adding this return statement
	}

	//recursive cases

	extendedEuclid(b, a % b);
	int cx = y;
	int cy = x - (a / b) * y;
	// cout << cx << " ," << cy << endl; // values will be printed from bottom way up

	x = cx;
	y = cy;

}

//Assuming that the inverse modulo number exists
//condition for existing is that the gcd of A and M should be 1

int moduloinverse(int a , int m) {
	if (gcd(a, m) == 1)
	{
		extendedEuclid(a, m);


		//gives all the values of x including the negative ones
		// return x;

		//gives only the postive values if exists
		return (x + m) % m;
	}
	else
	{
		cout << "Not possible to calculate ";
	}

	return	0;
}


int main()
{

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	// cout << gcd(10, 20) << endl;
	// cout << lcm(18, 36) << endl;

	// //solving the equation 18X + 30Y =6

	// extendedEuclid(18, 30);
	// cout << x << " ," << y << endl;
	cout << moduloinverse(14, 7) << endl;
	cout << moduloinverse(8, 7) << endl;
	cout << moduloinverse(18, 7) << endl;

	return 0;

}