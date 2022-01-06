#include <iostream>

int n;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> n;
}

void solution()
{
	int tree;
	int can1 = 0, can2 = 0;

	for(int i = 0; i < n; i++)
	{
		std::cin >> tree;
		can2 += tree / 2;
		can1 += tree % 2;
	}
	if ((can2 - can1) % 3 == 0 && can2 >= can1)
		std::cout << "YES";
	else
		std::cout << "NO";
}

int main(void)
{
	input_setting();
	input();
	solution();
	return (0);
}
