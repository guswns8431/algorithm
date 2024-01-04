#include <iostream>
#include <vector>
#include <queue>

int n, m;
std::vector<int> graph[1001];
std::vector<int> visited;
int answer = 0;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	int u, v;

	std::cin >> n >> m;
	visited.resize(n + 1);
	for (int i = 0; i < m; i++)
	{
		std::cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
}

void bfs(int i)
{
	std::queue<int> q;
	int node;
	int next;

	visited[i] = 1;
	q.push(i);
	while (!q.empty())
	{
		node = q.front();
		q.pop();
		for (int i = 0; i < graph[node].size(); i++)
		{
			if(!visited[graph[node][i]])
			{
				visited[graph[node][i]] = 1;
				q.push(graph[node][i]);
			}
		}
	}
}

void solution()
{
	for (int i = 1; i <= n; i++)
	{
		if (!visited[i])
		{
			answer++;
			bfs(i);
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
	return (0);
}
