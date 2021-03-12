#include <iostream>

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void solution()
{
	int t;
	int n;
	int max;

	std::cin >> t;
	while (t--)
	{
		std::cin >> n;
		max = n;
		while (n > 1)
		{
			if (n % 2 == 0)
				n /= 2;
			else
				n = n * 3 + 1;
			if (max < n)
				max = n;
		}
		std::cout << max << "\n";
	}
}

int main(void)
{
	input_setting();
	solution();
	return (0);
}
