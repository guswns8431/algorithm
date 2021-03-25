#include <iostream>
#include <vector>

int n;
std::vector<int> input_arr;
std::vector<std::vector<int> > dp;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	int i = 0;

	std::cin >> n;
	input_arr.resize(n + 1);
	dp.resize(n + 1, std::vector<int>(n + 1, 0));
	while (++i <= n)
		std::cin >> input_arr[i];
}

void solution()
{
	int i = 0;
	int j, k;

	while (++i <= n)
		dp[i][i] = 1;
	i = 0;
	while (++i <= n - 1)
		if (input_arr[i] == input_arr[i + 1])
			dp[i][i + 1] = 1;
	k = 2;
	while (++k <= n)
	{
		i = 0;
		while (++i <= n - k + 1)
		{
			j = i + k - 1;
			if (input_arr[i] == input_arr[j] && dp[i + 1][j - 1] == 1)
				dp[i][j] = 1;
		}
	}
}

void print()
{
	int m;
	int s,e;

	std::cin >> m;
	while (m--)
	{
		std::cin >> s >> e;
		std::cout << dp[s][e] << "\n";
	}
}

int main(void)
{
	input_setting();
	input();
	solution();
	print();
	return (0);
}
