#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

int n,m;
int dx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};
std::vector<std::vector<int> > space;
std::vector<std::vector<int> > visited;
std::queue<std::pair<int,int> >q;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> n >> m;
	space.resize(n, std::vector<int>(m));
	visited.resize(n, std::vector<int>(m));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			std::cin >> space[i][j];
			if (space[i][j])
				q.push({i, j});
		}
}

void solution()
{
	int nx, ny;
	int x, y;

	while (!q.empty())
	{
		y = q.front().first;
		x = q.front().second;
		q.pop();
		for (int i = 0; i < 8; i++)
		{
			ny = y + dy[i];
			nx = x + dx[i];
			if (ny < 0 || nx < 0 || ny >= n || nx >= m || visited[ny][nx])
				continue;
			if (!space[ny][nx])
			{
				q.push({ny, nx});
				visited[ny][nx] = visited[y][x] + 1;
			}
		}
	}
}

void print_answer()
{
	int answer = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			answer = std::max(answer, visited[i][j]);
	std::cout << answer;
}

int main(void)
{
	input_setting();
	input();
	solution();
	print_answer();
	return (0);
}
