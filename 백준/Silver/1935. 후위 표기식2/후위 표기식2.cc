#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <cctype>
using namespace std;

int main(void)
{
	int n;
	vector<double> value;
	string input;
	double num;
	stack<double> s;
	double answer = 0;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	cin >> input;
	value.resize(n);
	for (int i = 0; i < n; i++)
		cin >> value[i];
	for (unsigned int i = 0; i < input.size(); i++)
	{
		if (isalpha(input[i]))
			s.push(value[input[i] - 'A']);
		else
		{
			num = s.top();
			s.pop();
			if (input[i] == '+')
				answer = s.top() + num;
			else if (input[i] == '-')
				answer = s.top() - num;
			else if (input[i] == '*')
				answer = s.top() * num;
			else
				answer = s.top() / num;
			s.pop();
			s.push(answer);
		}
	}
	cout.setf(ios::fixed, ios::floatfield);
	cout.precision(2);
	cout << answer;
	return (0);
}