#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, len, i;
    long long ans = 1;
    string s;
    cin >> n;
    cin >> s;
    len = s.length();
    for(i=n; i>0; i=(i-len))
    {
        ans = ans*i;
    }
    cout << ans << endl;

    return 0;
}
