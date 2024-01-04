#include <iostream>
#include <vector>
#include <algorithm>

int t;
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
	std::cin >> t;
}

void solution()
{
	int num;
	for (int i = 0; i < t; i++)
	{
		int answer = -9999999;
		std::cin >> n;
		dp.resize(n + 1);
		for (int j = 1; j <= n; j++)
		{
			std::cin >> num;
			dp[j] = dp[j - 1] + num;
		}
		for (int j = 1; j <= n; j++)
			for (int k = j; k <= n; k++)
				answer = std::max(answer, dp[k] - dp[j - 1]);
		std::cout << answer << "\n";
	}
}


int main(void)
{
	input_setting();
	input();
	solution();
	return (0);
}
