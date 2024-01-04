#include <iostream>

int a,b;
int cnt = 0;
int idx = 0;

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
	for (int i = 1; i <= b; i++)
	{
		for (int j = 0; j < i; j++)
		{
			++idx;
			if (idx >= a)
				cnt += i;
			if (idx >= b)
				return ;
		}
	}
}

void print()
{
	std::cout << cnt;
}

int main(void)
{
	input_setting();
	input();
	solution();
	print();
	return (0);
}
