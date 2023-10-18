#include <iostream>
using namespace std;

int cnt = 0;
int dpcnt = 0;
int memo[40];

int fib(int n)
{
    if(n == 1 || n == 2){
      cnt++;
      return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

int fibonacci(int n)
{
    memo[0] = 1;
    memo[1] = 1;

    for (int i = 2; i < n; i++) {
      dpcnt++;
      memo[i] = memo[i-2] + memo[i-1];
    }
    return memo[n-1];
}

int main(void)
{
	int n;

	cin >> n;
	fib(n);
	fibonacci(n);
	cout << cnt << " " << dpcnt;

	return (0);
}