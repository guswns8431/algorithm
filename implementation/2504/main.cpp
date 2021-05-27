#include <iostream>
#include <stack>

std::string str;
std::stack<char> s;
long long answer = 0;
bool flag;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> str;
}

void solution()
{
	int len = str.size();
	int tmp = 1;

	for (int i = 0; i < len; i++)
	{
		if (str[i] == '(')
		{
			tmp *= 2;
			s.push('(');
		}
		else if (str[i] == '[')
		{
			tmp *= 3;
			s.push('[');
		}
		else if (str[i] == ')')
		{
			if (s.top() != '(' || s.empty())
			{
				flag = true;
				break ;
			}
			if (str[i - 1] == '(')
				answer += tmp;
			s.pop();
			tmp /= 2;
		}
		else if (str[i] == ']')
		{
			if (s.top() != '[' || s.empty())
			{
				flag = true;
				break ;
			}
			if (str[i - 1] == '[')
				answer += tmp;
			s.pop();
			tmp /= 3;
		}
	}
}

void print()
{
	if (flag || !s.empty())
		std::cout << "0";
	else
		std::cout << answer;
}

int main(void)
{
	input_setting();
	input();
	solution();
	print();
	return (0);
}
