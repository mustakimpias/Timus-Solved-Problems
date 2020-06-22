#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    cin >> n;
    vector <int> ans;
    if(n==1)
    {
        cout << "1" << endl;
        return 0;
    }
    else if(n==0)
    {
        cout << "10" << endl;
        return 0;
    }
    for(i=9; i>=2; i--)
    {
        while(n%i==0)
        {
            n/=i;
            ans.push_back(i);
        }
    }
    if(n==1)
    {
        for(i=ans.size()-1; i>=0; i--)
        {
            cout << ans[i];
        }
        cout << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
    return 0;
}
