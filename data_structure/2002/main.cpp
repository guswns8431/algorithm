#include <iostream>
#include <queue>

int n;
std::queue<std::string> car_list;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::string str;

	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> str;
		car_list.push(str);
	}
}

void solution()
{
	std::string tmp;
	int count;

	count = 0;
	for (int i = 0; i < n; i++)
	{
		std::cin >> tmp;
		if (tmp != car_list.front())
		{
			++count;
			continue ;
		}
		car_list.pop();
	}
	std::cout << count;
}

int main(void)
{
	input_setting();
	input();
	solution();
	return (0);
}
