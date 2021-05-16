#include <iostream>
#include <vector>

int n,m;
std::vector<int> answer;
std::vector<int> visited;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> n >> m;
	answer.resize(m + 1);
	visited.resize(m + 1);
}

void solution(int depth)
{
	if (m == depth)
	{
		for (int i = 0; i < m; i++)
			std::cout << answer[i] << " ";
		std::cout << "\n";
		return ;
	}
	for (int i = 1; i <= n; i++)
	{
		if (visited[i])
			continue ;
		visited[i] = 1;
		answer[depth] = i;
		solution(depth + 1);
		visited[i] = 0;
	}
}

int main(void)
{
	input_setting();
	input();
	solution(0);
	return (0);
}
