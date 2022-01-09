#include<bits/stdc++.H>
using namespace std;

//basic power calculation
int power(int a, int n) {

	if (n == 0) {
		return 1;
	}
	return a * power(a, n - 1);
}


//optimised power calculation
int fast_power(int a, int n) {
	if (n == 0) {
		return 1;
	}
	//recursive case

	int smaller_ans = fast_power(a, n / 2);

	//inefficient way of writing the code, DO NOT WRITE IN THIS WAY

	// int smaller_ans = fast_power(a, n / 2)*fast_power(a,n/2);


	smaller_ans *= smaller_ans;

	if (n & 1) {
		return a * smaller_ans;
	}
	return smaller_ans;
}

int main()
{

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int a, n;
	cin >> a >> n;

	cout << power(a, n) << endl;
	cout << fast_power(a, n) << endl;

	return 0;
}