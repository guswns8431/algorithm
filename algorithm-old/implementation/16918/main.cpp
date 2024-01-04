#include <iostream>
#include <vector>

int r,c,n;
std::vector<std::vector<int> > board;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::string str;

	std::cin >> r >> c >> n;
	board.resize(r, std::vector<int>(c));
	for (int i = 0; i < r; i++)
	{
		std::cin >> str;
		for (int j = 0; j < c; j++)
		{
			if (str[j] == '.')
				board[i][j] = -1;
			else
				board[i][j] = 1;
		}
	}
}

void bomb(int i, int j)
{
	board[i][j] = -1;
	if (i + 1 < r)
	{
		if (board[i + 1][j] == 3)
			bomb(i + 1, j);
		else
			board[i + 1][j] = -1;
	}
	if (j + 1 < c)
	{
		if (board[i][j + 1] == 3)
			bomb(i, j + 1);
		else
			board[i][j + 1] = -1;
	}
	if (i - 1 >= 0)
	{
		if (board[i - 1][j] == 3)
			bomb(i - 1, j);
		else
			board[i - 1][j] = -1;
	}
	if (j - 1 >= 0)
	{
		if (board[i][j - 1] == 3)
			bomb(i, j - 1);
		else
			board[i][j - 1] = -1;
	}
}

void solution()
{
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < r; j++)
			for (int k = 0; k < c; k++)
				board[j][k]++;
		if (i >= 2)
			for (int j = 0; j < r; j++)
				for (int k = 0; k < c; k++)
					if (board[j][k] == 3)
						bomb(j, k);

	}
}

void print()
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (board[i][j] == -1)
				std::cout << ".";
			else
				std::cout << "O";
		}
		std::cout << "\n";
	}
}

int main(void)
{
	input_setting();
	input();
	solution();
	print();
	return (0);
}
