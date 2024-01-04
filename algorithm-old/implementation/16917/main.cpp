#include <iostream>

int a, b, c, x, y;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> a >> b >> c >> x >> y;
}

void solution()
{
	int min;
	int i;

	i = -1;
	if (x > y)
	{
		min = a * x + b * y;
		while (++i <= y)
			if (min > c * i * 2 + a * (x - i) + b * (y - i))
				min = c * i * 2 + a * (x - i) + b * (y - i);
	}
	else
	{
		i = -1;
		min = a * x + b * y;
		while (++i <= x)
			if (min > c * i * 2 + b * (y - i) + a * (x - i))
				min = c * i * 2 + b * (y - i) + a * (x - i);
	}
	std::cout << min;
}

int main(void)
{
	input_setting();
	input();
	solution();
	return (0);
}
