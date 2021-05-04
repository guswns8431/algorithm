#include <iostream>
#include <utility>
#include <algorithm>

int n;
std::pair<int, int> egg[8];
int answer = 0;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> n;
	for (int i = 0; i < n; i++)
		std::cin >> egg[i].first >> egg[i].second;
}

void solution(int current)
{
	int flag = 0;

	if (current == n)
	{
		int count = 0;
		for (int i = 0; i < n; i++)
			if (egg[i].first <= 0)
				count++;
		answer = std::max(answer, count);
		return ;
	}
	if (egg[current].first <= 0)
	{
		solution(current + 1);
		return ;
	}
	for (int i = 0; i < n; i++)
	{
		if (i == current || egg[i].first <= 0)
			continue ;
		flag = 1;
		egg[current].first -= egg[i].second;
		egg[i].first -= egg[current].second;
		solution(current + 1);
		egg[current].first += egg[i].second;
		egg[i].first += egg[current].second;
	}
	if (!flag)
		solution(current + 1);
}

void print()
{
	std::cout << answer;
}

int main(void)
{
	input_setting();
	input();
	solution(0);
	print();
	return (0);
}
