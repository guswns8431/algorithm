#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int n,m;
std::vector<std::vector<int> > dp;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	int i;
	int j;
	std::string input_arr;

	i = 0;
	std::cin >> n >> m;
	dp.resize(n + 1, std::vector<int>(m + 1));
	while (++i <= n)
	{
		j = 0;
		std::cin >> input_arr;
		while (++j <= m)
			dp[i][j] = input_arr[j - 1] - '0';
	}
}

void solution()
{
	int i;
	int j;
	int max;

	i = 0;
	max = 0;
	while (++i <= n)
	{
		j = 0;
		while (++j <= m)
		{
			if (dp[i][j] == 0)
				continue ;
			if (i == 0 || j == 0)
			{
				max = std::max(dp[i][j], max);
				continue ;
			}
			dp[i][j] = std::min(std::min(dp[i][j - 1], dp[i - 1][j - 1]), dp[i - 1][j]) + 1;
			max = std::max(dp[i][j], max);
		}
	}
	std::cout << max * max;
}

int main(void)
{
	input_setting();
	input();
	solution();
	return (0);
}
