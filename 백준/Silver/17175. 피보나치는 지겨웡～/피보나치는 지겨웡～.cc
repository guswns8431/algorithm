#include <iostream>
#include <cstring>
using namespace std;

int dp[51];

int fibonacci(int n) {
	if (dp[n] != -1)
		return n;
	dp[n] = (dp[n - 2] + dp[n - 1] + 1) % 1000000007;
	return fibonacci(n - 2) + fibonacci(n - 1);
}

int main(void) {
	int n;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	memset(dp, -1, sizeof(dp));
	cin >> n;

	dp[0] = 1;
	dp[1] = 1;

	for (int i = 2; i <= n; i++)
		fibonacci(i);

	cout << dp[n];
	return (0);
}