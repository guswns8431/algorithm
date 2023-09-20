#include <iostream>
using namespace std;

int main(void)
{
	int n;
	int answer = 0;

	cin >> n;

	if (n == 1 || n == 3)
		answer = -1;
	else
	{
		answer += n / 5;
		n %= 5;
		if (n % 2 != 0)
		{
			n += 5;
			answer -= 1;
		}
		answer += n / 2;
	}
	cout << answer;
	return (0);
}