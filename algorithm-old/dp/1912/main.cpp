#include <iostream>
#include <vector>
#include <algorithm>

int n;
std::vector<int> dp;
std::vector<int> input_arr;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> n;
	dp.resize(n);
	input_arr.resize(n);
	for (int i = 0; i < n; i++)
		std::cin >> input_arr[i];
}

void solution()
{
	int answer;

	dp[0] = input_arr[0];
	answer = dp[0];
	for (int i = 1; i < n; i++)
	{
		dp[i] = std::max(dp[i -1] + input_arr[i], input_arr[i]);
		if (answer < dp[i])
			answer = dp[i];
	}
	std::cout << answer;
}

int main(void)
{
	input_setting();
	input();
	solution();
	return (0);
}
