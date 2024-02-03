#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string dp[101][101];

string addBigNumber(string num1, string num2) {
	string result = "";
	int sum = 0;

	while (!num1.empty() || !num2.empty() || sum) {
		if (!num1.empty()) {
			sum += num1.back() - '0';
			num1.pop_back();
		}
		if (!num2.empty()) {
			sum += num2.back() - '0';
			num2.pop_back();
		}
		result += sum % 10 + '0';
		sum /= 10;
	}
	reverse(result.begin(), result.end());
	return (result);
}

string combination(int n, int m) {
	if (n == m || m == 0)
		return ("1");

	if (dp[n][m] != "")
		return (dp[n][m]);
	dp[n][m] = addBigNumber(combination(n - 1, m - 1), combination(n - 1, m));
	return (dp[n][m]);
}

int main(void) {
	int n, m;
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;

	cout << combination(n, m);
	return (0);
}