#include <iostream>
#include <vector>
#include <queue>
#include <utility>

int m, n;
std::vector<std::vector<int> > map;
std::vector<std::vector<int> > visited;
int dx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};
int answer = 0;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> m >> n;
	map.resize(m, std::vector<int>(n));
	visited.resize(m, std::vector<int>(n));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			std::cin >> map[i][j];
}

void bfs(int y, int x)
{
	std::queue<std::pair<int, int> > q;
	int nx, ny;

	q.push({y, x});
	visited[y][x] = 1;
	while (!q.empty())
	{
		x = q.front().second;
		y = q.front().first;
		q.pop();
		for (int i = 0; i < 8; i++)
		{
			nx = x + dx[i];
			ny = y + dy[i];
			if (ny < 0 || nx < 0 || ny >= m || nx >= n)
				continue ;
			if (map[ny][nx] && !visited[ny][nx])
			{
				visited[ny][nx] = 1;
				q.push({ny, nx});
			}
		}
	}
}

void solution()
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (map[i][j] && !visited[i][j])
			{
				bfs(i, j);
				++answer;
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
	solution();
	print();
	return (0);
}
