#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <utility>

int n, m;
int answer;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
std::vector<std::vector <int> > lab;
std::vector<std::vector <int> > copy_lab;
std::vector<std::vector <int> > virus_lab;


void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> n >> m;
	lab.resize(n, std::vector<int>(m));
	copy_lab.resize(n, std::vector<int>(m));
	virus_lab.resize(n, std::vector<int>(m));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			std::cin >> lab[i][j];
}

void init_lab()
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			copy_lab[i][j] = lab[i][j];
}

void init_for_virus()
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			virus_lab[i][j] = copy_lab[i][j];
}

void bfs()
{
	int count = 0;
	std::queue<std::pair<int, int> > q;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (lab[i][j] == 2)
				q.push({i, j});
	while (!q.empty())
	{
		int x, y;

		x = q.front().second;
		y = q.front().first;
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int ny = y + dy[i];
			int nx = x + dx[i];

			if (ny >= 0 && nx >= 0 && ny < n && nx < m && virus_lab[ny][nx] == 0)
			{
				virus_lab[ny][nx] = 2;
				q.push({ny, nx});
			}
		}
	}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (virus_lab[i][j] == 0)
				++count;
	answer = std::max(answer, count);
}

void dfs(int depth)
{
	if (depth == 3)
	{
		init_for_virus();
		bfs();
		return ;
	}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (copy_lab[i][j] == 0)
			{
				copy_lab[i][j] = 1;
				dfs(depth + 1);
				copy_lab[i][j] = 0;
			}
}

void solution()
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			if (lab[i][j] == 0)
			{
				init_lab();
				copy_lab[i][j] = 1;
				dfs(1);
				copy_lab[i][j] = 0;
			}
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
}
