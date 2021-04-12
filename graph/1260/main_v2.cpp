#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

int n, m, v;
std::vector<std::vector<int> > graph;
std::vector<int> visited;
std::queue<int> q;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	int node1, node2;

	std::cin >> n >> m >> v;
	graph.resize(n + 1);
	visited.resize(n + 1);
	for (int i = 0; i < m; i++)
	{
		std::cin >> node1 >> node2;
		graph[node1].push_back(node2);
		graph[node2].push_back(node1);
	}
	for (int i = 1; i <= n; i++)
		std::sort(graph[i].begin(), graph[i].end());
}

void dfs(int node)
{
	int next_node;

	visited[node] = 1;
	std::cout << node << " ";
	for (size_t i = 0; i < graph[node].size(); i++)
	{
		next_node = graph[node][i];
		if (!visited[next_node])
			dfs(next_node);
	}
}

void bfs(int node)
{
	int current;

	q.push(node);
	while (!q.empty())
	{
		current = q.front();
		visited[node] = 1;
		std::cout << current << " ";
		q.pop();
		for (int i = 0; i < graph[current].size(); i++)
			if (!visited[graph[current][i]])
			{
				visited[graph[current][i]] = 1;
				q.push(graph[current][i]);
			}
	}
}

void solution()
{
	dfs(v);
	std::cout << "\n";
	std::fill(visited.begin(), visited.end(), 0);
	bfs(v);
}

int main(void)
{
	input_setting();
	input();
	solution();
	return (0);
}
