#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int n;
	string input;
	int answer = 1;
	int tmp = 0;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	cin >> input;

	for (int i = 1; i < n; i++)
	{
		if (input[0] != input[i])
			tmp++;
		else if (input[0] == input[i] && tmp != 0)
		{
			tmp = 0;
			answer++;
		}
	}
	if (tmp != 0)
		answer++;
	cout << answer;
	return (0);
}