#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main(void)
{
	int n;
	queue<int> answer;
	queue<char> print;
	stack<int> s;
	int tmp;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		answer.push(tmp);
	}
	for (int i = 1; i <= n; i++)
	{
		if (!s.empty() && s.top() == answer.front())
		{
			s.pop();
			answer.pop();
			print.push('-');
			i--;
		}
		else
		{
			s.push(i);
			print.push('+');
		}
	}
	while (!s.empty())
	{
		if (s.top() == answer.front())
		{
			print.push('-');
			answer.pop();
			s.pop();
		}
		else
		{
			cout << "NO";
			return (0);
		}
	}
	while (!print.empty())
	{
		cout << print.front() << "\n";
		print.pop();
	}
	return (0);
}