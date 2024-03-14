#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(void) {
	int n;
	int dp[100001];

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;

	for (int i = 1; i <= n; i++) {
		dp[i] = i;
		for (int j = 1; j * j <= i; j++)
			dp[i] = min(dp[i], dp[i - j * j] + 1);
	}
	cout << dp[n];
	return (0);
}