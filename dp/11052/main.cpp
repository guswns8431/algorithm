#include <iostream>
#include <vector>
#include <algorithm>

int n;
std::vector<int> dp;
std::vector<int> p;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	int i;

	i = 0;
	std::cin >> n;
	dp.resize(n + 1, 0);
	p.resize(n + 1);
	while (++i <= n)
		std::cin >> p[i];
}

void solution()
{
	int i = 0;

	while (++i <= n)
	{
		int j = 0;
		while (++j <= i)
			dp[i] = std::max(dp[i], dp[i - j] + p[j]);
	}
	std::cout << dp[n];
}

int main(void)
{
	input_setting();
	input();
	solution();
	return (0);
}
