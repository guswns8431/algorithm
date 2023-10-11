#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main(void)
{
	int n;
	vector<pair<int, int> > dp;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	dp.resize(n + 1);
	for (int i = 1; i <= n; i++)
		cin >> dp[i].first >> dp[i].second;
	if (dp[n].first != 1)
	{
		dp[n].first = 1;
		dp[n].second = 0;
	}
	for (int i = 2; i <= n; i++)
	{
		if (dp[n - i + 1].first > i)
			dp[n - i + 1].second = dp[n - i + 2].second;
		else
			dp[n - i + 1].second = max(dp[n - i + 2].second, dp[n - i + 1].second + dp[n - i + 1 + dp[n - i + 1].first].second);
	}
	cout << dp[1].second;
	return (0);
}