#include <iostream>
using namespace std;

int dp[21];

int fibo(int n)
{
	if (n == 0)
		return (0);
	else if (n == 1 || n == 2)
		return (1);
	else if (dp[n] != 0)
		return dp[n];
	dp[n] = fibo(n - 1) + fibo(n - 2);
	return (dp[n]);
}
int main(void)
{
	int n;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	cout << fibo(n);
}