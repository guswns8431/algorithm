#include <iostream>
#include <vector>

int n;
std::vector<std::string> name;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> n;
	name.resize(n);
	for (int i = 0; i < n; i++)
		std::cin >> name[i];
}

void solution()
{
	int len;
	int flag;

	len = name[0].length();
	for (int i = 0; i < len; i++)
	{
		flag = 0;
		for (int j = 0; j < n - 1; j++)
		{
			if (name[j][i] != name[j + 1][i])
			{
				flag = 1;
				break ;
			}
		}
		if (flag)
			std::cout << "?";
		else
			std::cout << name[0][i];

	}
}

int main(void)
{
	input_setting();
	input();
	solution();
	return (0);
}
