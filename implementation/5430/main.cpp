#include <iostream>
#include <deque>

int T;
std::string p;
int n;
std::string x;
std::deque<char> num;
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

bool find_num()
{
	
	int len = x.length();
	for (int i = 0; i < len; i++)
		if (x[i] >= '0' && x[i] <= '9')
			num.push_back(x[i]);
	if (num.empty())
	{
		std::cout << "error" << "\n";
		return (false);
	}
	return (true);
}

void print()
{
	if (num.empty())
	{
		std::cout << "error" << "\n";
		return ;
	}
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
			std::cout << "]" << "\n";
			return ;
		}
		std::cout << ",";
	}
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
		if(!find_num())
			continue ;
		for (int i = 0; i < p_len; i++)
		{
			if (p[i] == 'R')
				flag *= -1;
			else if (p[i] == 'D' && flag == -1)
			{
				if (num.empty())
					break ;
				num.pop_front();
			}
			else
			{
				if (num.empty())
					break ;
				num.pop_back();
			}
		}
		print();
	}
}

int main(void)
{
	input_setting();
	input();
	solution();
	return (0);
}
