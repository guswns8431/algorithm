#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::vector<int> > dp;
int n;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> n;
	dp.resize(n, std::vector<int>(3, 0));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < 3; j++)
			std::cin >> dp[i][j];
}

void solution()
{
	for (int i = 1; i < n; i++)
	{
		dp[i][0] += std::min(dp[i - 1][1], dp[i - 1][2]);
		dp[i][1] += std::min(dp[i - 1][0], dp[i - 1][2]);
		dp[i][2] += std::min(dp[i - 1][0], dp[i - 1][1]);
	}
	std::cout << std::min(std::min(dp[n - 1][0], dp[n - 1][1]), dp[n - 1][2]);
}

int main(void)
{
	input_setting();
	input();
	solution();
	return (0);
}
