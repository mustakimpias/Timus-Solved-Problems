#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        long n;
        cin >> n;
        long long t = sqrt((unsigned int)(n - 1) * 2);
        double chk = (t * (t + 1))/2+1;
        if(t * (t + 1) / 2 + 1 == n) cout << "1 ";
        else cout << "0 ";
    }
    return 0;
}
