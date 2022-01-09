//INVERSION COUNT means how far the array is sorted. If the inversion count is 0 then the array is already
//and if the array is sorted in reverse order then the inverse count is maximum

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag,
        tree_order_statistics_node_update>
        PBDS;

int main()
{

	/*ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif*/

	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++ ) {
		cin >> a[i];
	}

	PBDS st;
	int inversion_count = 0;

	for (int i = 0; i < n; i++) {
		inversion_count += (st.size() - st.order_of_key(a[i]));
		st.insert(a[i]);

	}
	cout << "The inversion count is: " << inversion_count;



}