#include <iostream>
#include <vector>
#include <algorithm>

int n;
int answer = 0;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void solution(int score, std::vector<int> tmp)
{
	if (tmp.size() == 2)
	{
		answer = std::max(answer, score);
		return ;
	}
	for (int i = 1; i < tmp.size() - 1; i++)
	{
		std::vector<int> v = tmp;
		v.erase(v.begin() + i);
		solution(score + tmp[i - 1] * tmp[i + 1], v);
	}
}

void input()
{
	std::vector<int> input_arr;

	std::cin >> n;
	input_arr.resize(n);
	for (int i = 0; i < n; i++)
		std::cin >> input_arr[i];
	solution(0, input_arr);
}



void print()
{
	std::cout << answer;
}

int main(void)
{
	input_setting();
	input();
	print();
	return (0);
}
