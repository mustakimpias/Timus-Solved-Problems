#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t, n, l, i;
    cin >> t;
    while(t--){
        cin >> n;
        l = 1;
        for(i = 2; i < n; i += l) l++;
        if(i == n || n == 1) cout << "1\n";
        else cout << "0\n";
    }
    return 0;

}
