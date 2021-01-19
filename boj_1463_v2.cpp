#include <iostream>

int main(void)
{
	int n;
	int i;
	int dp[1000001];

	i = 1;
	dp[1] = 0;
	std::cin >> n;
	while (++i <= n)
	{
		dp[i] = dp[i - 1] + 1;
		if (i % 2 == 0)
			dp[i] = dp[i] > dp[i / 2] + 1 ? dp[i / 2] + 1 : dp[i];
		if (i % 3 == 0)
			dp[i] = dp[i] > dp[i / 3] + 1 ? dp[i / 3] + 1 : dp[i];
	}
	std::cout << dp[n];
	return (0);
}
