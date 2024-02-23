#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	int n;
	double input;
	double answer = 0;
	double dp[10001];

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cout << fixed;
	cout.precision(3);

	cin >> n;
	cin >> input;
	dp[1] = input;
	for (int i = 2; i <= n; i++) {
		cin >> input;
		if (input > input * dp[i - 1])
			dp[i] = input;
		else
			dp[i] = dp[i - 1] * input;
		if (answer < dp[i])
			answer = dp[i];
	}
	cout << answer;
	return (0);
}