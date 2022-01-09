#include<bits/stdc++.h>

//extra header files to be used in PBDS

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag,
        tree_order_statistics_node_update>
        PBDS;


/*two main functions in pbds are:
 1. find_by_order()
 2. order_of_key()*/

int main()
{

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	PBDS s;
	s.insert(2);
	s.insert(3);
	s.insert(7);
	s.insert(10);

	//speciality of this pbds is that we get sorted array always

	auto it = s.find_by_order(2);
	cout << *it << " " << endl;
	cout << s.order_of_key(7) << endl;

}