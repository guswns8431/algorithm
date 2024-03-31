#include <iostream>
#include <vector>
using namespace std;

#define MOD 1000000009

int main(void) {
	int t;
	int n;
	int maxValue = 0;
	vector<int> inputVector;
	long long dp[1000001];

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> t;

	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;

	for (int i = 0; i < t; i++) {
		cin >> n;
		if (maxValue < n)
			maxValue = n;
		inputVector.push_back(n);
	}
	for (int i = 4; i <= maxValue; i++)
		dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % MOD;
	for (int i = 0; i < t; i++)
		cout << dp[inputVector[i]] << "\n";
	return (0);
}