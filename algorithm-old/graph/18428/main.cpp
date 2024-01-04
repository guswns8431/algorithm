#include <iostream>
#include <vector>

int n;
std::vector<std::vector<char> > board;
std::vector<std::vector<char> > cp_board;
bool flag;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> n;
	board.resize(n, std::vector<char>(n));
	cp_board.resize(n, std::vector<char>(n));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			std::cin >> board[i][j];
}

bool check_row(int col)
{
	for (int i = 0; i < n; i++)
		if (cp_board[i][col] == 'O')
			return (true);
	return (false);
}

bool check_col(int row)
{
	for (int i = 0; i < n; i++)
		if (cp_board[row][i] == 'O')
			return (true);
	return (false);
}

bool check()
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (cp_board[i][j] == 'S')
				if (!check_row(j) || !check_col(i))
					return (false);
	return (true);
}

void backtracking(int obstacle)
{
	if (obstacle == 3)
	{
		if(check())
			flag = true;
		return ;
	}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			if (cp_board[i][j] == 'X')
			{
				cp_board[i][j] = 'O';
				backtracking(obstacle + 1);
				cp_board[i][j] = 'X';
			}
		}
}

void copy()
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cp_board[i][j] = board[i][j];
}

void solution()
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			flag = false;
			copy();
			if (cp_board[i][j] != 'X')
				continue ;
			cp_board[i][j] = 'O';
			backtracking(1);
			if (flag)
				return ;
		}
}

void print()
{
	if (flag)
		std::cout << "YES";
	else
		std::cout << "NO";
}

int main(void)
{
	input_setting();
	input();
	solution();
	print();
}
