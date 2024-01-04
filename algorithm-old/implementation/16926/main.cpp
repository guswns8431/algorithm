#include <iostream>
#include <vector>

int n,m,r;
std::vector<std::vector<int> > a;
std::vector<std::vector<int> > visited;
int dx[5] = {0, 1, 0, -1};
int dy[5] = {1, 0, -1, 0};

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> n >> m >> r;
	a.resize(n, std::vector<int>(m, 0));
	visited.resize(n, std::vector<int>(m, 0));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			std::cin >> a[i][j];
}

void solution()
{
	int x = 0, y = 0;
	int nx, ny;
	int tmp1;
	int tmp2;
	int cnt = 0;

	for (int i = 0; i < r; i++)
	{
		std::fill(visited.begin(), visited.end(), std::vector<int>(m, 0));
		visited[0][0] = 1;
		tmp1 = a[0][0];
		a[0][0] = a[0][1];
		while (++cnt <= n * m)
		{
			for (int k = 0; k < 4; k++)
			{
				nx = dx[k] + y;
				ny = dy[k] + x;
				if (nx >= 0 && ny >= 0 && nx < n && ny < m && visited[nx][ny] == 0)
				{
					tmp2 = a[ny][nx];
					a[ny][nx] = tmp1;
					tmp1 = tmp2;
					visited[ny][nx] = 1;
					break;
				}
			}
			x = ny;
			y = nx;
		}
	}
}

void print()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			std::cout << a[i][j] << " ";
		std::cout << "\n";
	}
}

int main(void)
{
	input_setting();
	input();
	solution();
	print();
	return (0);
}
