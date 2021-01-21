#include <iostream>

int count = 0;

void solution(int sum, int n)
{
	if (n < sum)
		return ;
	else if (n == sum)
	{
		++count;
		return ;
	}
	else
		for (int i = 1; i <= 3; i++)
			solution(sum + i, n);
}

int main(void)
{
	int t;
	int n;

	std::cin >> t;
	for (int i = 0; i < t ; i++)
	{
		count = 0;
		std::cin >> n;
		solution(0, n);
		std::cout << count << '\n';
	}
	return (0);
}
