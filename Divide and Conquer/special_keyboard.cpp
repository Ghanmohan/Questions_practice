#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

ll int optimalKeys(int n)
{

    if (n <= 6)
        return n;

    int max = 0;
    for (int i = n - 3; i >= 1; i--)
    {
        int curr = (n - i - 1) * optimalKeys(i);
        if (curr > max)
        {
            max = curr;
        }
    }
    return max;
}



int main()
{

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    for (int n = 0; n <= 11; n++)
    {
        cout << "The A is : " << optimalKeys(n) << endl;
    }
}