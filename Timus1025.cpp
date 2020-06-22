#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int a[t];
    for (int i = 0; i < t; i++)
        cin >> a[i];

        sort (a, a+t);

        int ans = 0;
        for (int i = 0; i * 2 < t; i++)
        ans += (a[i] + 2) / 2;
        cout << ans << "\n";
        return 0;
}