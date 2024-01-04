#include <iostream>
#include <deque>

int T;
std::string p;
int n;
std::string x;
std::deque<std::string> num;
int flag = -1;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> T;
}

void get_num(int *index, int len)
{
	std::string str;

	str = "";
	while (*index < len && x[*index] >= '0' && x[*index] <= '9')
		str += x[(*index)++];
	num.push_back(str);
}

void find_num()
{	
	int len = x.length();
	for (int i = 0; i < len; i++)
		if (x[i] >= '0' && x[i] <= '9')
			get_num(&i, len);
}

void print()
{
	std::cout << "[";
	while (!num.empty())
	{
		if (flag == -1)
		{
			std::cout << num.front();
			num.pop_front();
		}
		else
		{
			std::cout << num.back();
			num.pop_back();
		}
		if (num.empty())
		{
			break ;
		}
		std::cout << ",";
	}
	if (num.empty())
		std::cout << "]" << "\n";
}


void solution()
{
	int p_len;

	for (int i = 0; i < T; i++)
	{
		std::cin >> p;
		std::cin >> n;
		std::cin >> x;

		p_len = p.length();
		flag = -1;
		find_num();
		for (int i = 0; i < p_len; i++)
		{
			if (p[i] == 'R')
				flag *= -1;
			else if (p[i] == 'D' && flag == -1)
			{
				if (num.empty())
				{
					std::cout << "error\n";
					break ;
				}
				num.pop_front();
			}
			else
			{
				if (num.empty())
				{
					std::cout << "error\n";
					break ;
				}
				num.pop_back();
			}
			if (i + 1 == p_len)
				print();
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
