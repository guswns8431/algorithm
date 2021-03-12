#include <iostream>
#include <vector>

int n;
std::vector<int> dp;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> n;
	dp.resize(n + 1, 0);
}

void solution()
{
	dp[1] = 1;
	dp[2] = 1;
	for (int i = 3; i <= n; i++)
		dp[i] = dp[i - 1] + dp[i - 2];
	std::cout << dp[n];
}

int main(void)
{
	input_setting();
	input();
	solution();
	return (0);
}
