#include <iostream>

//int game[4][18];

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void solution()
{
	int win, draw, lose;
	int flag;
	int tmp;
	int input;
	/*
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 18; j++)
		{
			std::cin >> game[i][j];
			*/
	for (int i = 0; i < 4; i++)
	{
		win = 0;
		draw = 0;
		lose = 0;
		flag = 0;
		tmp = 0;
		for (int j = 0; j < 18; j++)
		{
			std::cin >> input;
			if (j % 3 == 0)
				win += input;
			else if (j % 3 == 1)
			{
				draw += input;
				if (flag == 0 && input != 0)
				{
					flag = 1;
					tmp += input;
				}
				else if (tmp != 0)
				{
					tmp -= input;
					if (tmp == 0)
						flag = 0;
				}

			}
			else
				lose += input;
		}
		if (win + draw + lose != 30)
		{
			std::cout << "0 ";
			continue ;
		}
		if (win != lose)
		{
			std::cout << "0 ";
			continue ;
		}
		if (tmp != 0)
		{
			std::cout << "0 ";
			continue ;
		}
		std::cout << "1 ";
	}
}

int main(void)
{
	input_setting();
	solution();
	return (0);
}
