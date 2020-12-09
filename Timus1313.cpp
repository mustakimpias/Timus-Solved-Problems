#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ara[100][100];
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> ara[i][j];
        }
    }
    
    for(int i = 0; i < 2 * n - 1; i++)
    {
        for(int c = 0; c <= i && c < n; c++)
        {
            int r = i - c;
            if(r >= 0 && r < n)
                cout << ara[r][c] << " ";
        }
    }
    return 0;
}