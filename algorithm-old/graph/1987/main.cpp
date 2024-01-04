#include <iostream>
#include <vector>
#include <unordered_set>

int R, C;
std::vector<std::vector<char> > board;
std::unordered_set<char> checked;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int answer = 0;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> R >> C;
	board.resize(R, std::vector<char>(C));
	for (int i = 0; i < R; i++)
		for (int j = 0; j < C; j++)
			std::cin >> board[i][j];
	for (int i = 0; i < R; i++)
	{
		std::cout << std::endl;
		for (int j = 0; j < C; j++)
			std::cout << board[i][j] << " ";
	}
}

void solution(int r, int c, int depth)
{
	int next_r;
	int next_c;

	if (checked.find(board[r][c]) != checked.end())
	{
		if (answer < depth - 1)
			answer = depth - 1;
		return ;
	}
	checked.insert(board[r][c]);
	for (int i = 0; i < 4; i++)
	{
		next_r = r + dy[i];
		next_c = c + dx[i];
		if (next_r >= R || next_c >= C || next_r < 0 || next_c < 0)
			continue;
		solution(next_r, next_c, depth + 1);
	}
	checked.erase(board[r][c]);
}

void print()
{
	std::cout << answer;
}

int main(void)
{
	input_setting();
	input();
	solution(0,0,1);
	print();
	return (0);
}
