#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void)
{
	int t;
	stack<char> s;
	string input;
	string answer = "YES\n";

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> t;
	for (int i = 0; i < t; i++)
	{
		answer = "YES\n";
		cin >> input;
		for (unsigned int j = 0; j < input.size(); j++)
		{
			if (input[j] == '(')
				s.push('(');
			else
			{
				if (s.empty())
				{
					answer = "NO\n";
					break ;
				}
				s.pop();
			}
		}
		if (!s.empty())
			answer = "NO\n";
		for (;!s.empty();)
			s.pop();
		cout << answer;
	}
	return (0);
}