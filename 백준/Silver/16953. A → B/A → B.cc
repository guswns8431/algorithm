#include <iostream>

int a,b;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> a >> b;
}

void solution()
{
	int answer;

	answer = 0;
	while (a < b)
	{
		if (b % 2 == 0)
			b /= 2;
		else if (b % 10 == 1)
			b /= 10;
		else
        {
			std::cout << "-1";
            return ;
        }
		++answer;
	}
	if (a > b)
		std::cout << "-1";
	if (a == b)
		std::cout << ++answer;
}

int main(void)
{
	input_setting();
	input();
	solution();
	return (0);
}