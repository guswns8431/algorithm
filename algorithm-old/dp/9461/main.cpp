#include <iostream>
#include <vector>

int t;
std::vector<int> dp;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void solution()
{
	int n;
	int i, j;

	i = 5;
	j = 0;
	std::cin >> n;
	dp.resize(n + 1);
	dp[1] = 1;
	dp[2] = 1;
	dp[3] = 1;
	dp[4] = 2;
	dp[5] = 2;
	while (++i <= n)
		dp[i] = dp[i - 1] + dp[++j];
	std::cout << dp[n] << "\n";
}

void input()
{
	std::cin >> t;
	while (t--)
		solution();
}

int main(void)
{
	input_setting();
	input();
	return (0);
}
