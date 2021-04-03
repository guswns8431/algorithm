#include <iostream>
#include <vector>
#include <queue>
#define LADDER 101
#define SNAKE 102

int n,m;
int map[101];
int ladder[101];
int snake[101];
int cal_map[101];

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	int tmp1, tmp2;

	std::cin >> n >> m;
	for (int i = 1; i <= 100; i++)
		map[i] = i;
	for (int i = 0; i < n; i++)
	{
		std::cin >> tmp1 >> tmp2;
		map[tmp1] = 101;
		ladder[tmp1] = tmp2;
	}
	for (int i = 0; i < m; i++)
	{
		std::cin >> tmp1 >> tmp2;
		map[tmp1] = 102;
		snake[tmp1] = tmp2;
	}
}

int check_ladder_or_snake(int node)
{
	if (map[node] == LADDER)
		return (ladder[node]);
	else if (map[node] == SNAKE)
		return (snake[node]);
	else
		return (map[node]);
}

void solution()
{
	std::queue<int> q;
	int node;
	int next_node;

	q.push(1);
	cal_map[1] = 1;
	while (!q.empty())
	{
		node = q.front();
		q.pop();
	
		for (int i = 1; i <= 6; i++)
		{
			next_node = node + i;
			next_node = check_ladder_or_snake(next_node);
			if (next_node >= 1 && next_node <= 100 && !cal_map[next_node])
			{
				q.push(next_node);
				cal_map[next_node] = cal_map[node] + 1;
				if (cal_map[100])
					break ;
			}
		}
	}
	std::cout << cal_map[100];
}

int main(void)
{
	input_setting();
	input();
	solution();
	return (0);
}
