#include <iostream>
#include <vector>



int main(void)
{
	int n;
	int i;
    std::vector<int> dp;
    
	i = 1;
    
	dp.push_back(0);
	dp.push_back(0);
	std::cin >> n;
    dp.reserve(n+1);
	while (++i <= n)
	{
		dp.push_back(dp[i - 1] + 1);
		if (i % 2 == 0)
			dp[i] = dp[i] > dp[i / 2] + 1 ? dp[i / 2] + 1 : dp[i];
		if (i % 3 == 0)
			dp[i] = dp[i] > dp[i / 3] + 1 ? dp[i / 3] + 1 : dp[i];
	}
	std::cout << dp[n];
	return (0);
}
