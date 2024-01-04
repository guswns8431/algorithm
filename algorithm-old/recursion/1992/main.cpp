#include <iostream>
#include <vector>

int n;
std::vector<std::vector<int> > input_arr;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::string str;

	std::cin >> n;
	input_arr.resize(n, std::vector<int>(n));
	for (int i = 0; i < n; i++)
	{
		std::cin >> str;
		for (int j = 0; j < n; j++)
			input_arr[i][j] = str[j] - '0';
	}
}

void solution(int row, int col, int size)
{
	int tmp_count = 0;
	for (int i = row; i < row + size; i++)
		for (int j = col; j < col + size; j++)
			if (input_arr[i][j])
				++tmp_count;
	if (!tmp_count)
		std::cout << "0";
	else if (tmp_count == size * size)
		std::cout << "1";
	else
	{
		std::cout << "(";
		solution(row, col, size / 2);
		solution(row, col + size / 2, size / 2);
		solution(row + size / 2, col, size / 2);
		solution(row + size / 2, col + size / 2, size / 2);
		std::cout << ")";
	}
	return ;
}

int main(void)
{
	input_setting();
	input();
	solution(0, 0, n);
	return (0);
}
