#include <iostream>
#include <algorithm>
#include <vector>

std::vector<int> input_arr1;
std::vector<int> input_arr2;
std::vector<int> dp_arr1;
std::vector<int> dp_arr2;

int n;

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
	input_arr1.resize(n + 1);
	input_arr2.resize(n + 1);
	dp_arr1.resize(n + 1);
	dp_arr2.resize(n + 1);
	while (++i <= n)
		std::cin >> input_arr1[i];
	i = 0;
	while (++i <= n)
		std::cin >> input_arr2[i];
}

void solution()
{
	int i = 2;

	input();
	dp_arr1[1] = input_arr1[1];
	dp_arr2[1] = input_arr2[1];
	dp_arr1[2] = dp_arr2[1] + input_arr1[2];
	dp_arr2[2] = dp_arr1[1] + input_arr2[2];
	while (++i <= n)
	{
		dp_arr1[i] = std::max(dp_arr2[i - 1], dp_arr2[i - 2]) + input_arr1[i];
		dp_arr2[i] = std::max(dp_arr1[i - 1], dp_arr1[i - 2]) + input_arr2[i];
	}
	std::cout << std::max(dp_arr1[n], dp_arr2[n]) << "\n";
}

int main(void)
{
	int t;

	input_setting();
	std::cin >> t;
	while (t--)
		solution();
	return (0);
}
