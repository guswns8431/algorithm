#include <iostream>
#include <vector>
#include <queue>

int a, b;
int n, m;
std::vector<std::vector<int> > way;
std::vector<int> visited;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	int input1, input2;

	std::cin >> a >> b;
	std::cin >> n >> m;
	way.resize(n + 1);
	visited.resize(n + 1, -1);
	for (int i = 0; i < m; i++)
	{
		std::cin >> input1 >> input2;
		way[input1].push_back(input2);
		way[input2].push_back(input1);
	}
}

void solution()
{
	std::queue<int> q;

	q.push(a);
	visited[a] = 0;

	while (!q.empty())
	{
		int cur = q.front();
		q.pop();

		if (cur == b)
			break ;
		for (int i = 0; i < way[cur].size(); i++)
		{
			int next = way[cur][i];
			if (visited[next] == -1)
			{
				q.push(next);
				visited[next] = visited[cur] + 1;
			}
		}
	}
}

void print()
{
	std::cout << visited[b];
}

int main(void)
{
	input_setting();
	input();
	solution();
	print();
	return (0);
}
