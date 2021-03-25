#include <iostream>
#include <vector>
#include <cstring>
#include <queue>
#include <algorithm>

int n,m,v;
std::vector<int> visited;
std::vector< std::vector<int> > adj_matrix;
std::queue<int> q;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	int s,e;

	std::cin >> n >> m >> v;
	visited.resize(n + 1, 0);
	adj_matrix.resize(n + 1, std::vector<int>(n + 1, 0));
	for (int i = 0; i < m; i++)
	{
		std::cin >> s >> e;
		adj_matrix[s][e] = 1;
		adj_matrix[e][s] = 1;
	}
}

void dfs(int v)
{
	visited[v] = 1;
	std::cout << v << " ";
	for (int i = 1; i <= n; i++)
		if (adj_matrix[v][i] == 1 && visited[i] == 0)
			dfs(i);
	return ;
}

void bfs(int v)
{
	int current;
	
	q.push(v);
	while (!q.empty())
	{
		current = q.front();
		visited[current] = 1;
		std::cout << current << " ";
		q.pop();
		for (int i = 1; i <= n; i++)
			if (adj_matrix[current][i] == 1 && visited[i] == 0)
			{
				q.push(i);
				visited[i] = 1;
			}
	}
}

int main(void)
{
	input_setting();
	input();
	dfs(v);
	std::cout << "\n";
	std::fill(visited.begin(), visited.end(), 0);
	bfs(v);
	return (0);
}
