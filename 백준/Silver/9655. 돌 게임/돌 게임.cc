#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int n;
	int dp[1001];

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	dp[1] = 1;
	dp[2] = 2;

	cin >> n;
	for (int i = 3; i <= n; i++)
		dp[i] = min(dp[i - 3], dp[i - 1]) + 1;

	if (dp[n] % 2 == 1)
		cout << "SK";
	else
		cout << "CY";
	return (0);
}