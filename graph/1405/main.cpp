#include <iostream>

int input_arr[4];
int checked[29][29] = {0, };
int dy[4] = {0, 1, 0, -1};
int dx[4] = {1, 0, -1, 0};
int n;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> n;
	for (int i = 0; i < 4; i++)
		std::cin >> input_arr[i];
}

double solution(int y, int x, int depth)
{
	int next_y;
	int next_x;
	double result = 0;

	if (depth == n)
		return (1);
	checked[y][x] = 1;
	for(int i = 0; i < 4; i++)
	{
		next_y = y + dy[i];
		next_x = x + dx[i];
		if (checked[next_y][next_x] == 1)
			continue;
		result += input_arr[i] * 0.01 * solution(next_y, next_x, depth + 1) ;
	}
	checked[y][x] = 0;
	return (result);
}

int main(void)
{
	input_setting();
	input();
	std::cout.precision(10);
	std::cout << std::fixed << solution(14, 14, 0);
	return (0);
}
