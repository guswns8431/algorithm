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
	dp.resize(n + 1);
}

void solution()
{
	int i;

	i = 2;
	dp[1] = 1;
	dp[2] = 3;
	while (++i <= n)
		dp[i] = (dp[i - 1] % 10007 + dp[i - 2] * 2 % 10007) % 10007;
	std::cout << dp[n] << "\n";
}

int main(void)
{
	input_setting();
	input();
	solution();
	return (0);
}
