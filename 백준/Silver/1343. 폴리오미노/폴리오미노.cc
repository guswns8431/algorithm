#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string input;
	int cnt = 0;
	string answer = "";

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> input;

	for (unsigned int i = 0; i < input.size(); i++)
	{
		if (input[i] == 'X')
		{
			cnt++;
			if (cnt == 4)
			{
				answer += "AAAA";
				cnt = 0;
			}
		}
		else
		{
			if (cnt == 2)
			{
				answer += "BB";
				cnt = 0;
			}
			if (cnt == 0)
				answer += ".";
			else
			{
				cout <<  "-1";
				return (0);
			}
		}
	}
	if (cnt == 2)
		answer += "BB";
	else if (cnt != 0)
		answer = "-1";
	cout << answer;
	return (0);
}