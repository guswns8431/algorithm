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
	input_arr.resize(n);
	dp.resize(n, 1);
	for (int i = 0; i < n; i++)
		std::cin >> input_arr[i];
}

void solution()
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < i; j++)
			if (input_arr[i] < input_arr[j] && dp[i] < dp[j] + 1)
				dp[i] = dp[j] + 1;
}

void print()
{
	int answer = 0;

	for (int i = 0; i < n; i++)
		answer = std::max(dp[i], answer);
	std::cout << answer << "\n";
}

int main(void)
{
	input_setting();
	input();
	solution();
	print();
	return (0);
}
