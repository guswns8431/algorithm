#include <iostream>
#include <vector>

int n,m,k;
std::vector<std::vector<int> > input_arr;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	int i,j;

	i = 0;
	std::cin >> n >> m;
	input_arr.resize(n + 1, std::vector<int>(m + 1, 0));
	while (++i <= n)
	{
		j = 0;
		while (++j <= m)
			std::cin >> input_arr[i][j];
	}
	std::cin >> k;
}

void solution()
{
	int i, j, x, y;
	int row, col;
	int sum;

	while (k--)
	{
		sum = 0;
		std::cin >> i >> j >> x >> y;
		row = i - 1;
		while (++row <= n && row <= x)
		{
			col = j - 1;
			while (++col <= m && col <= y)
				sum += input_arr[row][col];
		}
		std::cout << sum << "\n";
	}
}

int main(void)
{
	input_setting();
	input();
	solution();
	return (0);
}
