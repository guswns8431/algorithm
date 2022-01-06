#include <iostream>

int n, k;
std::string str = "0";

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> n >> k;
}

long long numlen(long long num)
{
	int i = 1;
	while ((num /= 10) > 0)
		++i;
	return (i);
}

void solution()
{
	long long len = 0;
	int i;

	for (i = 1; i <= n; i++)
	{
		len += numlen(i);
		if (len >= k)
			break ;
	}
	while (len > k)
	{
		i /= 10;
		--len;
	}
	if (len == k)
		std::cout << i % 10;
	else
		std::cout << -1;
}

int main(void)
{
	input_setting();
	input();
	solution();
	return (0);
}
