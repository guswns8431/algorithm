#include <iostream>
#include <unordered_set>

std::string board[5][5];
std::unordered_set<std::string> answer;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			std::cin >> board[i][j];
}

void dfs(int x, int y, int depth, std::string str)
{
	int next_x, next_y;

	if (depth == 6)
	{
		answer.insert(str);
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		next_x = x + dx[i];
		next_y = y + dy[i];
		if (next_x < 0 || next_y < 0 || next_x >= 5 || next_y >= 5)
			continue ;
		dfs(next_x, next_y, depth + 1, str + board[next_y][next_x]);
	}
}

void solution()
{
	std::string str;

	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
		{
			str = board[i][j];
			dfs(i, j, 1, str);
		}
}

void print()
{
	std::cout << answer.size();
}

int main(void)
{
	input_setting();
	input();
	solution();
	print();
	return (0);
}
