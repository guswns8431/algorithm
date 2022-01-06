#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>

int n,m;
int answer = 999999999;
std::vector<std::vector<int> > input_arr;
std::vector<std::pair<int, int> > home;
std::vector<std::pair<int, int> > chicken;
int visited[13];

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> n >> m;
	input_arr.resize(n + 1, std::vector<int>(n + 1));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			std::cin >> input_arr[i][j];
			if (input_arr[i][j] == 1)
				home.push_back({i, j});
			else if (input_arr[i][j] == 2)
				chicken.push_back({i, j});
		}
}

void solution(int idx, int depth)
{
	if (depth == m)
	{
		int city_chicken = 0;
		int home_len = home.size();
		int chicken_len = chicken.size();
		for (int i = 0; i < home_len; i++)
		{
			int tmp = 999999999;
			for (int j = 0; j < chicken_len; j++)
				if (visited[j])
					tmp = std::min(tmp, std::abs(home[i].first - chicken[j].first) + std::abs(home[i].second - chicken[j].second));
			city_chicken += tmp;
		}
		answer = std::min(answer, city_chicken);
		return ;
	}
	if (idx == chicken.size())
		return ;
	visited[idx] = 1;
	solution(idx + 1, depth + 1);
	visited[idx] = 0;
	solution(idx + 1, depth);
}

void print()
{
	std::cout << answer;
}

int main(void)
{
	input_setting();
	input();
	solution(0,0);
	print();
	return (0);
}
