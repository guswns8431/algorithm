#include <iostream>
#include <vector>
#include <queue>

int n;
int input1, input2;
std::vector<std::vector<int> > relation;
std::vector<int> visited;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	int m;
	int tmp1, tmp2;

	std::cin >> n;
	std::cin >> input1 >> input2;
	std::cin >> m;
	relation.resize(n + 1, std::vector<int>(n + 1));
	visited.resize(n + 1);
	for (int i = 0; i < m; i++)
	{
		std::cin >> tmp1 >> tmp2;
		relation[tmp1][tmp2] = 1;
		relation[tmp2][tmp1] = 1;
	}
}

void solution()
{
	std::queue<int> q;
	int next;

	q.push(input1);
	visited[input1] = 1;

	while (!q.empty())
	{
		next = q.front();
		q.pop();
		if (next == input2)
			break ;
		for (int i = 1; i < n; i++)
			if (relation[next][i] == 1 && !visited[i])
			{
				q.push(i);
				visited[i] = visited[next] + 1;
			}
	}
	std::cout << visited[input2] - 1;
}

int main(void)
{
	input_setting();
	input();
	solution();
	return (0);
}
