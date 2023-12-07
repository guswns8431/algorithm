#include <iostream>
#include <stack>
#include <string>
#include <sstream>
using namespace std;

int main(void)
{
	int n;
	stack<int> s;
    stringstream stream;
	string op;
	string input;
	int element;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		getline(cin, input);
        stream.clear();
		stream.str(input);
		stream >> op >> element;

		if (op == "push")
			s.push(element);
		else if (op == "pop")
		{
			if (s.empty())
				cout << "-1\n";
			else
			{
				cout << s.top() << "\n";
				s.pop();
			}
		}
		else if (op == "size")
			cout << s.size() << "\n";
		else if (op == "empty")
		{
			if (s.empty())
				cout << "1\n";
			else
				cout << "0\n";
		}
		else
		{
			if (s.empty())
				cout << "-1\n";
			else
				cout << s.top() << "\n";
		}
	}
	return (0);
}