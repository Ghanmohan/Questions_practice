#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout); f
#endif

    int i, j, count = 0, ans = 0;
    string s;
    cin >> s;
    int n = s.size();

    int arr[26] = {0};
    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            if (arr[s[j] - 'a'] != 0) {
                ans = max(ans, count);
                break;
            }
            if (arr[s[j] - 'a'] == 0) {
                count++;
                arr[s[j] - 'a']++;
            }
        }
    }

    cout << ans;



    return 0;

