#include <iostream>
#include <vector>
#include <algorithm>

int n;
std::vector<int> dp;
std::vector<int> input_arr;
int answer;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> n;
	dp.resize(n, 1);
	input_arr.resize(n);
	for (int i = 0; i < n; i++)
		std::cin >> input_arr[i];
}

void solution()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
			if (input_arr[i] > input_arr[j] && dp[i] < dp[j] + 1)
				dp[i] = dp[j] + 1;
		answer = std::max(answer, dp[i]);
	}
}

void print()
{
	std::cout << answer;
}

int main(void)
{
	input_setting();
	input();
	solution();
	print();
	return (0);
}
