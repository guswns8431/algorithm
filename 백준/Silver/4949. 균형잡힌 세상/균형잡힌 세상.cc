#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(void)
{
	stack<char> s;
	string answer = "yes";
	string input;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	while (true)
	{
		getline(cin,input);
		if (input == ".")
			break ;
		for (unsigned int i = 0; i < input.size(); i++)
		{
			if (input[i] == '[')
				s.push('[');
			else if (input[i] == '(')
				s.push('(');
			else if (input[i] == ']')
			{
				if (s.empty())
				{
					answer = "no";
					break ;
				}
				if (s.top() == '[')
					s.pop();
				else
				{
					answer = "no";
					break ;
				}
			}
			else if (input[i] == ')')
			{
				if (s.empty())
				{
					answer = "no";
					break ;
				}
				if (s.top() == '(')
					s.pop();
				else
				{
					answer = "no";
					break ;
				}
			}
		}
		if (!s.empty())
		{
			answer = "no";
			while (!s.empty())
				s.pop();
		}
		cout << answer << "\n";
		answer = "yes";
	}
	return (0);
}