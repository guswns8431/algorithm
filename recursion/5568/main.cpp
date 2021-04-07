#include <iostream>
#include <vector>
#include <unordered_set>
#include <string>

int n, k;
std::unordered_set<std::string> answer;
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
	std::cin >> n >> k;
	input_arr.resize(n);
	visited.resize(n, 0);
	for (int i = 0; i < n; i++)
		std::cin >> input_arr[i];
}

void solution(std::string card, int count)
{
	if (count != k)
	{
		for (int i = 0; i < n; i++)
		{
			if (visited[i] == 0)
			{
				visited[i] = 1;
				solution(card + std::to_string(input_arr[i]), count + 1);
				visited[i] = 0;
			}
		}
	}
	else
		answer.insert(card);
}


int main(void)
{
	input_setting();
	input();
	solution("", 0);
	std::cout << answer.size();
	return (0);
}

