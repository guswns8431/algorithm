#include <iostream>
#include <vector>
#define MOD 1000000000

int n;
std::vector<std::vector<int> > dp;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> n;
	dp.resize(n + 1, std::vector<int>(11, 0));
	for (int i = 1; i <= 9; i++)
		dp[1][i] = 1;
}

void solution()
{
	int sum = 0;

	for (int i = 2; i <= n; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			if (j == 0)
				dp[i][0] = dp[i - 1][1];
			else if (j == 9)
				dp[i][9] = dp[i - 1][8];
			else
				dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]);
		}
	}
	for (int i = 0; i <= 9; i++)
		sum = (sum + dp[n][i]);
	std::cout << sum;
}

int main(void)
{
	input_setting();
	input();
	solution();
	return (0);
}
