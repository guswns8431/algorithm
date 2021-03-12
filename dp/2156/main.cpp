#include <iostream>
#include <vector>
#include <algorithm>

int n;
std::vector<int> dp;
std::vector<int> wine;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> n;
	dp.resize(n + 3);
	wine.resize(n + 3);
	for (int i = 3; i < n + 3; i++)
		std::cin >> wine[i];
}

void solution()
{
	for (int i = 3; i < n + 3; i++)
	{
		dp[i] = std::max(wine[i] + wine[i - 1] + dp[i - 3], wine[i] + dp[i - 2]);
		dp[i] = std::max(dp[i], dp[i - 1]);
	}
	std::cout << dp[n + 2];
}

int main(void)
{
	input_setting();
	input();
	solution();
	return (0);
}
