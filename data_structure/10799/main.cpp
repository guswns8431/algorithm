#include <iostream>
#include <stack>

std::stack<char> s;
std::string str;
int answer = 0;

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
	int len = str.length();
	int stick = 0;

	s.push('(');
	for (int i = 1; i < len; i++)
	{
		if(str[i] == ')' && str[i - 1] == '(')
		{
			s.pop();
			s.push('.');
		}
		else
			s.push(str[i]);
	}
	len = s.size();
	for (int i = 0; i < len; i++)
	{
		if (s.top() == ')')
			++stick;
		else if (s.top() == '.')
			answer += stick;
		else
		{
			++answer;
			--stick;
		}
		s.pop();
	}
}

void print()
{
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
