#include <iostream>
using namespace std;

#define MAX 1000000009

int main(void) {
	int t;
	int input;
	long long dp[100001][4];

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> t;

	dp[1][1] = 1;
	dp[2][2] = 1;
	dp[3][1] = 1;
	dp[3][2] = 1;
	dp[3][3] = 1;

	for (int i = 4; i <= 100000; i++) {
		dp[i][1] = (dp[i - 1][2] + dp[i - 1][3]) % MAX;
		dp[i][2] = (dp[i - 2][1] + dp[i - 2][3]) % MAX;
		dp[i][3] = (dp[i - 3][1] + dp[i - 3][2]) % MAX;
	}

	for (int i = 0; i < t; i++) {
		cin >> input;
		cout << (dp[input][1] + dp[input][2] + dp[input][3]) % MAX << "\n";
	}
	return (0);
}