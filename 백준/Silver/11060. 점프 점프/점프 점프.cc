#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 2147483647

int main(void) {
	int n;
	int input;
	long long dp[1001];

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	fill(dp, dp + 1001, MAX);

	cin >> n;
	dp[1] = 0;
	for (int i = 1; i <= n; i++) {
		cin >> input;
		for (int j = 1; j <= input; j++) {
			if (i + j > 1000)
				break ;
			dp[i + j] = min(dp[i + j], dp[i] + 1);
		}
	}
	if (dp[n] == MAX)
		cout << "-1";
	else
		cout << dp[n];
	return (0);
}