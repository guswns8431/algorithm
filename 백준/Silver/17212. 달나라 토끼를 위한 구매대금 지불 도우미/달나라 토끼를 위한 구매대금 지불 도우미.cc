#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	int dp[100001] = {0, };
	int n;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;

	dp[1] = 1;
	dp[2] = 1;
	dp[3] = 2;
	dp[4] = 2;
	dp[5] = 1;
	dp[6] = 2;
	dp[7] = 1;

	for (int i = 8; i <= n; i++)
		dp[i] = min(min(dp[i - 1], min(dp[i - 2], dp[i - 5])), dp[i - 7]) + 1;
	cout << dp[n];
	return (0);
}