#include <iostream>
#include <vector>
#include <algorithm>

int n,m;
std::vector<int> answer;
std::vector<int> input_arr;
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
	answer.resize(n);
	input_arr.resize(n);
	visited.resize(n);
	for (int i = 0; i < n; i++)
		std::cin >> input_arr[i];
	std::sort(input_arr.begin(), input_arr.end());
}

void solution(int depth)
{
	if (depth == m)
	{
		for (int i = 0; i < m; i++)
			std::cout << answer[i] << " ";
		std::cout << "\n";
		return ;
	}
	for (int i = 0; i < n; i++)
	{
		if (visited[i])
			continue ;
		visited[i] = 1;
		answer[depth] = input_arr[i];
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
