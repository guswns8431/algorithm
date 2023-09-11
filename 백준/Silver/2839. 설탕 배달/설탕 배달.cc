#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int n;
	vector<int> dp;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	dp.resize(n + 1, -1);

	for (int i = 3; i <=n; i += 3)
		dp[i] = i / 3;
	for (int i = 5; i <= n; i += 5)
	{
		if (dp[i] == -1)
			dp[i] = i / 5;
		else
			dp[i] = min(dp[i], i / 5);
	}
	for (int i = 6; i <= n; i++)
	{
		if (dp[i] == -1)
		{
			if (dp[i - 3] != -1)
				dp[i] = dp[i - 3] + 1;
			if (dp[i - 5] != -1)
				dp[i] = min(dp[i], dp[i - 5] + 1);
		}
		else
		{
			if (dp[i - 3] != -1)
				dp[i] = min(dp[i - 3] + 1, dp[i]);
			if (dp[i - 5] != -1)
				dp[i] = min(dp[i], dp[i - 5] + 1);
		}
	}
	cout << dp[n];
	return (0);
}