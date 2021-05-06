#include <iostream>

int n;
bool paper[100][100];

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
	int x, y;
	int answer = 0;

	for (int i = 0; i < n; i++)
	{
		std::cin >> x >> y;
		for (int j = x; j < x + 10; j++)
			for (int k = y; k < y + 10; k++)
				paper[k][j] = true;
	}
	for (int i = 0; i < 100; i++)
		for (int j = 0; j < 100; j++)
			if (paper[i][j])
				++answer;
	std::cout << answer;
}

int main(void)
{
	input_setting();
	input();
	solution();
	return (0);
}
