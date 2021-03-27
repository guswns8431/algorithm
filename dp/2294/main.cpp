#include <iostream>
#include <vector>
#include <algorithm>

#define MAX 10001
int n,k;
std::vector<int> dp;
std::vector<int> coin;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> n >> k;
	dp.resize(k + 1, MAX);
	dp[0] = 0;
	coin.resize(n + 1);
	for (int i = 1; i <= n; i++)
		std::cin >> coin[i];
}

void print_answer()
{
	if (dp[k] == MAX)
		std::cout << "-1";
	else
		std::cout << dp[k];
}

void solution()
{
	for (int i = 1; i <= n; i++)
		for (int j = coin[i]; j <= k; j++)
			if (dp[j] > dp[j - coin[i]] + 1)
				dp[j] = dp[j - coin[i]] + 1;
}

int main(void)
{
	input_setting();
	input();
	solution();
	print_answer();
	return (0);
}
