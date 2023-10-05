#include <iostream>
#include <queue>
#include <string>
#include <sstream>
using namespace std;

int main(void)
{
	int n;
	queue<int> q;
	stringstream s;
	string input;
	string op;
	int num;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		getline(cin, input);
		s.clear();
		s.str(input);
		s >> op >> num;

		if (op == "push")
			q.push(num);
		else if (op == "pop")
		{
			if (q.empty())
				cout << "-1";
			else
			{
				cout << q.front();
				q.pop();
			}
			cout << "\n";
		}
		else if (op == "size")
			cout << q.size() << "\n";
		else if (op == "empty")
		{
			if (q.empty())
				cout << "1";
			else
				cout << "0";
			cout << "\n";
		}
		else if (op == "front")
		{
			if (q.empty())
				cout << "-1";
			else
				cout << q.front();
			cout << "\n";
		}
		else
		{
			if (q.empty())
				cout << "-1";
			else
				cout << q.back();
			cout << "\n";
		}
	}
	return (0);
}