#include <iostream>
using namespace std;

int main(void)
{
	int a,b,c;
	int answer = 1;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> a >> b >> c;
	if (a % 2 == 1)
		answer *= a;
	if (b % 2 == 1)
		answer *= b;
	if (c % 2 == 1)
		answer *= c;
	if (answer == 1)
		answer = a * b * c;
	if (answer % 2 == 0 && (a == 1 || b == 1 || c == 1))
		answer = 1;
	cout << answer;
	return (0);
}