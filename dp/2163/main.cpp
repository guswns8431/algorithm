#include <iostream>
#include <vector>

int n, m;
std::vector<int> dp;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> n >> m;
	dp.resize(n * m + 1);
}

void solution()
{
	dp[1] = 0;
	for (int i = 2; i < n * m + 1; i++)
		dp[i] = dp[i - 1] + 1;
	std::cout << dp[n * m];
}

int main(void)
{
	input_setting();
	input();
	solution();
	return (0);
}
