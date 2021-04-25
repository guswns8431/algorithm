#include <iostream>

int n, k;
int dp[1001][1001];

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> n >> k;
}

void solution()
{
	for (int i = 0; i <= n; i++)
		for (int j = 0; j <= k; j++)
		{
			if (i == j || j == 0)
				dp[i][j] = 1;
			else
				dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % 10007;
		}
}

void print()
{
	std::cout << dp[n][k];
}

int main(void)
{
	input_setting();
	input();
	solution();
	print();
	return (0);
}
