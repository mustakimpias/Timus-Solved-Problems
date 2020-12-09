#include<bits/stdc++.h>
using namespace std;

#define N 99999
int ara[N+5];

int main()
{
    ara[0] = 0;
    ara[1] = 1;
    for(int i = 2; i <= N; i++)
    {
        if(i & 1)
            ara[i] = ara[i/2] + ara[i/2+1];
        else
            ara[i] = ara[i/2];
    }
    for(int i = 2; i <= N; i++)
        ara[i] = max(ara[i], ara[i-1]);
    int n;
    while (cin >> n)
    {
        if(n == 0)
            break;
        else 
            cout << ara[n] << endl;
    }
    return 0;
}