#include <iostream>
#include <vector>

int t;
int n;
std::vector<long long> price;

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
	long long max;
	long long profit;

	for (int i = 0; i < t; i++)
	{
		max = 0;
		profit = 0;

		std::cin >> n;
		price.resize(n);
		for (int j = 0; j < n; j++)
			std::cin >> price[j];
		for (int j = n - 1; j >= 0; j--)
		{
			if (price[j] >= max)
				max = price[j];
			else
				profit += (max - price[j]);
		}
		std::cout << profit << "\n";
	}
}

int main(void)
{
	input_setting();
	input();
	solution();
	return (0);
}
