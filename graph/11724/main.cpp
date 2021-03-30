#include <iostream>
#include <vector>

int n, m;
std::vector<std::vector <int> > graph;
std::vector<bool> visited;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> n >> m;
	graph.resize(n + 1, std::vector<int>(n + 1));
	visited.resize(n + 1);
}

void dfs(int node)
{
	int next;
	visited[node] = true;

	for (int i = 1; i < graph[node].size(); i++)
	{
		next = graph[node][i];
		if (!visited[next])
			dfs(next);
	}
}

void solution()
{
	int node1, node2;
	int answer;

	answer = 0;
	for (int i = 0; i < m; i++)
	{
		std::cin >> node1 >> node2;
		graph[node1].push_back(node2);
		graph[node2].push_back(node1);
	}
	for (int i = 1; i <= n; i++)
	{
		if (!visited[i])
		{
			dfs(i);
			answer++;
		}
	}
	std::cout << answer;
}

int main(void)
{
	input_setting();
	input();
	solution();
	return (0);
}
