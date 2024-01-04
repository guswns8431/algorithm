#include <iostream>
#include <stack>

std::string str;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void solution()
{
	int flag;
	int len;
	int answer;
	int idx = 0;
	char c1, c2;

	while (true)
	{
		std::cin >> str;

		len = str.length();
		if (str[0] == '-')
			return ;
		answer = 0;
		std::stack<char> s;
		for (int i = 0; i < len; i++)
		{
			if (str[i] == '}' && !s.empty() && s.top() == '{')
				s.pop();
			else
				s.push(str[i]);
		}
		while (!s.empty())
		{
			c1 = s.top();
			s.pop();
			c2 = s.top();
			s.pop();
			if (c1 == c2)
				answer++;
			else
				answer += 2;
		}
		std::cout << ++idx << ". " << answer << "\n";
	}
}

int main(void)
{
	input_setting();
	solution();
	return (0);
}
