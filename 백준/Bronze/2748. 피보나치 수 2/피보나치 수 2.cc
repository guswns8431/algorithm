#include <iostream>
using namespace std;

long long mem[91];

long long fibo(int n)
{
	if (n == 0)
		return (0);
	if (n == 1 || n == 2)
		return (1);
	if (mem[n] != 0)
		return (mem[n]);
	mem[n] = fibo(n - 1) + fibo(n - 2);
	return (mem[n]);
}


int main(void)
{
	int n;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;

	cout << fibo(n);

	return (0);
}