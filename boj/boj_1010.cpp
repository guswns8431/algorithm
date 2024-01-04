#include <iostream>
#include <vector>
#include <iomanip>

std::vector<double> dp;
int t;
int n, m;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> t;
}

void factorial_memoization()
{
	int i = 1;

	dp[0] = 1;
	dp[1] = 1;
	while (++i <= m)
		dp[i] = dp[i - 1] * i;
}

void solution()
{
	std::cout << std::setprecision(15);
	while (t--)
	{
		std::cin >> n >> m;
		dp.resize(m + 1);
		factorial_memoization();
		std::cout << dp[m] / (dp[m - n] * dp[n]) << "\n";
	}
}

int main(void)
{
	input_setting();
	input();
	solution();
	return (0);
}
