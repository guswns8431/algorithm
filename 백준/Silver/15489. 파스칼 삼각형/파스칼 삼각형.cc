#include <iostream>
#include <cstring>
using namespace std;

int dp[31][31];
int r, c, w;

int pascal(int row, int col) {
	if (dp[row][col] != 0)
		return (dp[row][col]);
	if (col == 1 || col == row) {
		dp[row][col] = 1;
		return (dp[row][col]);
	}
	return (dp[row][col] = pascal(row - 1, col - 1) + pascal(row - 1, col));
}


int main(void) {
	long long answer = 0;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> r >> c >> w;

	memset(dp, 0, sizeof(dp));
	for (int i = r; i < r + w; i++)
		for (int j = c; j <= c + i - r; j++) {
			if (dp[i][j] == 0)
				pascal(i, j);
			answer += dp[i][j];
		}
	cout << answer;
	return (0);
}