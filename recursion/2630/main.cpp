#include <iostream>
#include <vector>

int n;
std::vector<std::vector<int> > square;
int white_count = 0, blue_count = 0;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> n;
	square.resize(n, std::vector<int>(n));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			std::cin >> square[i][j];
}

void solution(int row, int col, int size)
{
	int tmp_count = 0;
	for (int i = row; i < row + size; i++)
		for (int j = col; j < col + size; j++)
			if (square[i][j])
				++tmp_count;
	if (!tmp_count)
		++white_count;
	else if (tmp_count == size * size)
		++blue_count;
	else
	{
		solution(row, col, size / 2);
		solution(row, col + size / 2, size / 2);
		solution(row + size / 2, col, size / 2);
		solution(row + size / 2, col + size / 2, size / 2);
	}
	return ;
}

void print()
{
	std::cout << white_count << "\n";
	std::cout << blue_count << "\n";
}

int main(void)
{
	input_setting();
	input();
	solution(0, 0, n);
	print();
	return (0);
}
