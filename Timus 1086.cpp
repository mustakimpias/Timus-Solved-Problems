#include<bits/stdc++.h>
using namespace std;
#define M 1000000
bool prime[M];

bool isPrime(int n){
    if(n < 2) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    return prime[n] == false;
}

void sieve(int n){
    for(int p = 3; p * p <= n; p += 2){
        if(prime[p] == false){
            for(int i = p * 2; i <= n; i += p)
                prime[i] = true;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int k, num;
    cin >> k;
    sieve(1000000);
    vector <int> result;
    for(int i = 0; i < 1000000; i++)
        if(isPrime(i))
        result.push_back(i);
    while(k--){
        cin >> num;
        cout << result[num - 1] << "\n";
    }
    return 0;
}
