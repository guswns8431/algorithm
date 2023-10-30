#include <iostream>
#include <string>
#include <cmath>
#include <cctype>
using namespace std;

int main(void)
{
	string n;
	int b;
	int answer = 0;
	int cnt = 0;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> b;
	for (int i = n.size() - 1; i >= 0; i--)
	{
		if (isalpha(n[i]))
			answer += ((n[i] - 'A' + 10) * pow(b, cnt++));
		else
			answer += ((n[i] - '0') * pow(b, cnt++));
	}
	cout << answer;
	return (0);
}