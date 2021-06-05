#include <iostream>
#include <vector>
#include <queue>
#include <utility>

int n, m;
int tmp_w = 1;
int tmp_b = 1;
std::vector<std::vector<int> > map;
std::vector<std::vector<int> > visited;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int count_w = 0;
int count_b = 0;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::string str;

	std::cin >> n >> m;
	map.resize(m, std::vector<int>(n));
	visited.resize(m, std::vector<int>(n));
	for (int i = 0; i < m; i++)
	{
		std::cin >> str;
		for (int j = 0; j < n; j++)
		{
			if (str[j] == 'W')
				map[i][j] = 1;
			else
				map[i][j] = 0;
		}
	}
}

void bfs(int y, int x, char color)
{
	int ny, nx;
	std::queue<std::pair<int, int> > q;

	visited[y][x] = 1;
	q.push({y, x});

	while (!q.empty())
	{
		y = q.front().first;
		x = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			ny = y + dy[i];
			nx = x + dx[i];
			if (ny < 0 || nx < 0 || ny >= m || nx >= n)
				continue ;
			if (map[ny][nx] == 1 && visited[ny][nx] == 0 && color == 'W')
			{
				visited[ny][nx] = 1;
				tmp_w++;
				q.push({ny, nx});
			}
			else if (map[ny][nx] == 0 && visited[ny][nx] == 0 && color == 'B')
			{
				visited[ny][nx] = 1;
				tmp_b++;
				q.push({ny, nx});
			}
		}
	}
}

void solution()
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (map[i][j] == 1 && visited[i][j] == 0)
			{
				bfs(i, j, 'W');
				count_w += tmp_w * tmp_w;
				tmp_w = 1;
			}
			else if (map[i][j] == 0 && visited[i][j] == 0)
			{
				bfs(i, j, 'B');
				count_b += tmp_b * tmp_b;
				tmp_b = 1;
			}
		}
	}
}

void print()
{
	std::cout << count_w << " " << count_b;
}

int main(void)
{
	input_setting();
	input();
	solution();
	print();
	return (0);
}
