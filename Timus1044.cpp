#include <bits/stdc++.h>
using namespace std;

int pow (int a, int x)
{
	int result = 1;
	for (int i = 0; i < x; i++){
		result *= a;
	}
	return result;
}

int DigitSum (int n)
{
	int sum = 0;
	while (n > 0){
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int mem[40];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < pow(10, n/2); i++){
		int s = DigitSum(i);
		mem[s]++;
	}
	int ans = 0;
	for (int i = 0; i < pow(10, n/2); i++){
		int s = DigitSum(i);
		ans += mem[s];
	}
	cout << ans << "\n";
	return 0;
}