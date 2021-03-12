#include <iostream>
#include <vector>
#include <algorithm>

int n;
std::vector<std::vector<int> > dp;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> n;
	dp.resize(n);
	for (int i = 0; i < n; i++)
	{
		dp[i].resize(i + 1);
		for (int j = 0; j < i + 1; j++)
			std::cin >> dp[i][j];
	}
}

void solution()
{
	int answer;

	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			if (j == 0)
				dp[i][0] += dp[i - 1][0];
			else if (j == i)
				dp[i][j] += dp[i - 1][j - 1];
			else
				dp[i][j] += std::max(dp[i - 1][j - 1], dp[i - 1][j]);
			if (answer < dp[i][j])
				answer = dp[i][j];
		}
	}
	std::cout << answer;
}

int main(void)
{
	input_setting();
	input();
	solution();
	return (0);
}
