#include <iostream>
#include <algorithm>
using namespace std;

long long gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

int main(void)
{
	long long a, b;
	int big, small;
	int n;
	long long answer;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		big = max(a, b);
		small = min(a, b);
		answer = a * b / gcd(big, small);
		cout << answer << "\n";
	}
	return (0);
}