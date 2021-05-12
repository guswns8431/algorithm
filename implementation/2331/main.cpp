#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

std::vector<int> input_arr;
int a, p;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> a >> p;
}

void solution()
{
	int next = 0;
	int tmp;
	int count = 0;
	input_arr.push_back(a);
	tmp = input_arr.back();
	while (1)
	{
		next += pow(tmp % 10, p);
		tmp /= 10;
		if (tmp < 10)
		{
			next += pow(tmp % 10, p);
			auto it = std::find(input_arr.begin(), input_arr.end(), next);
			if (it == input_arr.end())
			{
				input_arr.push_back(next);
				tmp = input_arr.back();
		next = 0;
			}
			else
			{
				for (auto i = input_arr.begin(); i < it; i++)
					count++;
				std::cout << count;
				return ;
			}
		}
	}
}

int main(void)
{
	input_setting();
	input();
	solution();
	return (0);
}
