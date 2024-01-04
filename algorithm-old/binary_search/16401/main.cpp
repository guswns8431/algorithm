#include <iostream>
#include <vector>
#include <algorithm>

int m, n;
std::vector<int> snack;
int answer = 0;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> m >> n;
	snack.resize(n);
	for (int i = 0; i < n; i++)
		std::cin >> snack[i];
}

void solution()
{
	std::sort(snack.begin(), snack.end());
	int start = 0;
	int end = snack[n - 1];

	while (start <= end)
	{
		int count = 0;
		int mid = (start + end) / 2;
		for (int i = 0; i < n; i++)
			if (snack[i] >= mid)
				count += snack[i] / mid;
		if (count >= m)
		{
			answer = mid;
			start = start + 1;
		}
		else
			end = mid - 1;
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
