#include <iostream>

std::string input_str;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> input_str;
}

void solution()
{
	int len = input_str.length();
	int count = 0;

	for (int i = 0; i < len; i++)
	{
		if (input_str[i] == 'c')
		{
			if (input_str[++i] == '=')
				++count;
			else if (input_str[i] == '-')
				++count;
			else
			{
				--i;
				++count;
			}
		}
		else if (input_str[i] == 'd')
		{
			if (input_str[++i] == 'z')
			{
				if (input_str[++i] == '=')
					++count;
				else
				{
					i -= 2;
					++count;
				}
			}
			else if (input_str[i] == '-')
				++count;
			else
			{
				--i;
				++count;
			}
		}
		else if (input_str[i] == 'l')
		{
			if (input_str[++i] == 'j')
				++count;
			else
			{
				--i;
				++count;
			}
		}
		else if (input_str[i] == 'n')
		{
			if (input_str[++i] == 'j')
				++count;
			else
			{
				--i;
				++count;
			}
		}
		else if (input_str[i] == 's')
		{
			if (input_str[++i] == '=')
				++count;
			else
			{
				--i;
				++count;
			}
		}
		else if (input_str[i] == 'z')
		{
			if (input_str[++i] == '=')
				++count;
			else
			{
				--i;
				++count;
			}
		}
		else
			++count;
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
