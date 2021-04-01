#include <iostream>
#include <vector>
#include <queue>

int m,n;
std::vector<std::vector<int> > visited;
std::vector<std::vector<int> > input_arr;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::string str;

	std::cin >> m >> n;
	input_arr.resize(m, std::vector<int>(n, 0));
	visited.resize(m, std::vector<int>(n, 0));
	for (int i = 0; i < m; i++)
	{
		std::cin >> str;
		for (int j = 0; j < n; j++)
			input_arr[i][j] = str[j] - '0';
	}
}

bool bfs(int x, int y)
{
	int qx, qy;
	int nx, ny;
	std::queue<std::pair<int, int> > q;

	visited[x][y] = 1;
	q.push({x,y});
	while (!q.empty())
	{
		qx = q.front().first;
		qy = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			nx = qx + dx[i];
			ny = qy + dy[i];
			if (nx == m - 1)
			{
				std::cout << "YES";
				return (1);
			}
			if (nx < 0 || ny < 0 || nx >= m || ny >= n || visited[nx][ny] == 1)
				continue ;
			if (input_arr[nx][ny] == 0)
			{
				visited[nx][ny] = 1;
				q.push({nx, ny});
			}
		}
	}
	return (0);
}

void solution()
{
	for (int i = 0; i < n; i++)
		if (visited[0][i] == 0 && input_arr[0][i] == 0)
			if(bfs(0, i))
				return ;
	std::cout << "NO";
}

int main(void)
{
	input_setting();
	input();
	solution();
	return (0);
}
