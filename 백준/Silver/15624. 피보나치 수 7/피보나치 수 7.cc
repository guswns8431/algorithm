#include <iostream>
using namespace std;

int main(void) {
	int n;
	long long fibo[1000001];

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;

	fibo[0] = 0;
	fibo[1] = 1;

	for (int i = 2; i <= n; i++)
		fibo[i] = (fibo[i - 1] + fibo[i - 2]) % 1000000007;
	cout << fibo[n];
	return (0);
}