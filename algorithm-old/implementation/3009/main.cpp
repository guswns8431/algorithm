#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> x(3);
std::vector<int> y(3);

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	for (int i = 0; i < 3; i++)
		std::cin >> x[i] >> y[i];
}

void solution()
{
	int ans_x;
	int ans_y;

	std::sort(x.begin(), x.end());
	std::sort(y.begin(), y.end());
	ans_x = x[0];
	ans_y = y[0];
	if (ans_x == x[1])
		ans_x = x[2];
	if (ans_y == y[1])
		ans_y = y[2];
	std::cout << ans_x << " " << ans_y;
}

int main(void)
{
	input_setting();
	input();
	solution();
	return (0);
}
