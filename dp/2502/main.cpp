#include <iostream>
#include <vector>

int d,k;
std::vector<std::pair<int, int> > dp;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> d >> k;
	dp.resize(d + 1);
	dp[1].first = 1;
	dp[1].second = 0;
	dp[2].first = 0;
	dp[2].second = 1;
}

void solution()
{
	for (int i = 3; i <= d; i++)
	{
		dp[i].first = dp[i - 1].first + dp[i - 2].first;
		dp[i].second = dp[i - 1].second + dp[i - 2].second;
	}

	for (int i = 1; i <= k; i++)
		for (int j = i; j <= k; j++)
		{
			if ((dp[d].first * i) + (dp[d].second * j) == k)
			{
				std::cout << i << "\n";
				std::cout << j << "\n";
				return ;
			}
		}
}

int main(void)
{
	input_setting();
	input();
	solution();
	return (0);
}
