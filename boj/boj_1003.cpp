#include <iostream>
#include <vector>

std::vector<std::pair<int, int> > dp;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void solution()
{
	int i = 1;

	dp.resize(41);
	dp[0] = std::make_pair(1, 0);
	dp[1] = std::make_pair(0, 1);
	while (++i <= 40)
	{
		dp[i].first = dp[i - 1].first + dp[i - 2].first;
		dp[i].second = dp[i - 1].second + dp[i - 2].second;
	}
}

int main(void)
{
	int t;
	int n;

	input_setting();
	std::cin >> t;
	solution();
	while (t--)
	{
		std::cin >> n;
		std::cout << dp[n].first << " " << dp[n].second << "\n";
	}
	return (0);
}
