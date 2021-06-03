#include <iostream>
#include <vector>
#include <queue>
#include <utility>

int n, k;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
std::vector<std::vector<int> > virus;
std::queue<std::pair<std::pair<int, int>, std::pair<int, int> > > q;
int s, x, y;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> n >> k;
	virus.resize(n, std::vector<int>(n));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			std::cin >> virus[i][j];
	std::cin >> s >> x >> y;
}

void solution()
{
	int nc, nr;
	int v,t;
	int c, r;

	for (int i = 1; i <= k; i++)
	{
		for (int j = 0; j < n; j++)
			for (int z = 0; z < n; z++)
			{
				if (virus[j][z] == i)
					q.push({{j, z}, {i, 0}});
			}
	}
	while (!q.empty())
	{
		t = q.front().second.second;
		v = q.front().second.first;
		c = q.front().first.second;
		r = q.front().first.first;
		q.pop();
		if (t == s)
			return ;
		for (int i = 0; i < 4; i++)
		{
			nc = dx[i] + c;
			nr = dy[i] + r;
			if (nc < 0 || nr < 0 || nc >= n || nr >= n || virus[nr][nc])
				continue ;
			if(virus[nr][nc] == 0)
			{
				virus[nr][nc] = v;
				q.push({{nr, nc}, {v, t + 1}});
			}
		}
	}
}

void print()
{
	std::cout << virus[x - 1][y - 1];
}

int main(void)
{
	input_setting();
	input();
	solution();
	print();
	return (0);
}
