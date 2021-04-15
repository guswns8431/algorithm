#include <iostream>
#include <vector>
#include <algorithm>

int n, m;
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
	for (int i = 0; i < n; i++)
		std::cin >> input_arr[i];
	std::cin >> m;
}

void solution()
{
	int start, mid, end;
	int sum;
	int answer;

	start = 0;
	end = *std::max_element(input_arr.begin(), input_arr.end());
	while (start <= end)
	{
		sum = 0;
		mid = (start + end) / 2;
		for (int i = 0; i < input_arr.size(); i++)
		{
			if (input_arr[i] - mid > 0)
				sum += mid;
			else
				sum += input_arr[i];
		}
		if (sum <= m)
		{
			answer = mid;
			start = mid + 1;
		}
		else
			end = mid - 1;
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
