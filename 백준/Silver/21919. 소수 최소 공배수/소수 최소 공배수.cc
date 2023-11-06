#include <iostream>
#include <algorithm>
#include <cmath>
#include <stack>
using namespace std;

bool isPrime(int a)
{
	int max_idx = sqrt(a);
	bool isDivided = false;

	for (int i = 2; i <= max_idx; i++)
	{
		if (a % i == 0)
		{
			isDivided = true;
			break ;
		}
	}
	if (isDivided)
		return (false);
	return (true);
}

long long gcd(long long a, long long b)
{
	if (b == 0)
		return (a);
	return (gcd(b, a % b));
}

long long lcm(long long a, long long b)
{
	return (a * b / gcd(a, b));
}

int main(void)
{
	int n;
	int input;
	stack<long long> s;
	long long answer;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (isPrime(input))
			s.push(input);
	}
	if (s.empty())
		cout << "-1";
	else
	{
		answer = s.top();
		s.pop();
		while (!s.empty())
		{
			answer = lcm(max(answer, s.top()), min(answer, s.top()));
			s.pop();
		}
		cout << answer;
	}
	return (0);
}