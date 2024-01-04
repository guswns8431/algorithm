#include <iostream>
#include <algorithm>

int N;
int garden[10][10];
int checked[10][10];
int answer = 999999999;
int dx[5] = {0, 1, 0, -1, 0};
int dy[5] = {0, 0, 1, 0, -1};

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> N;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			std::cin >> garden[i][j];
}

int get_cost()
{
	int cost = 0;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			if(checked[i][j])
				cost += garden[i][j];
	return (cost);
}

void buy(int y, int x)
{
	int next_y;
	int next_x;

	for (int i = 0; i < 5; i++)
	{
		next_y = dy[i] + y;
		next_x = dx[i] + x;
		checked[next_y][next_x] = 1;
	}
}

void reset(int y, int x)
{
	int next_y;
	int next_x;

	for (int i = 0; i < 5; i++)
	{
		next_y = dy[i] + y;
		next_x = dx[i] + x;
		checked[next_y][next_x] = 0;
	}
}

bool check_garden(int y, int x)
{
	int next_y;
	int next_x;

	for (int i = 0; i < 5; i++)
	{
		next_y = y + dy[i];
		next_x = x + dx[i];
		if (checked[next_y][next_x])
			return (false);
	}
	return (true);
}

void solution(int index, int depth)
{
	if (depth == 3)
	{
		answer = std::min(answer, get_cost());
		return ;
	}
	for (int i = index; i < N - 1; i++)
		for (int j = 1; j < N - 1; j++)
			if (check_garden(i, j))
			{
				buy(i, j);
				solution(i, depth + 1);
				reset(i, j);
			}
}

void print()
{
	std::cout << answer;
}

int main(void)
{
	input_setting();
	input();
	solution(1, 0);
	print();
	return (0);
}
