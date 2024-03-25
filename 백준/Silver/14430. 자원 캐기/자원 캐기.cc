#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	int n, m;
	int board[301][301];
	int dp[301][301];

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> board[i][j];
			dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + board[i][j];
		}
	}
	cout << dp[n][m];
	return (0);
}