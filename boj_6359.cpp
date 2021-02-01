#include <iostream>
#include <vector>
#define OPEN 0
#define CLOSE 1

int n;
std::vector<int> prison;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void solution()
{
	int answer = 0;

	for (int round = 2; round <= n; round++)
	{
		for (int i = round; i <= n; i += round)
		{
			if (prison[i] == OPEN)
				prison[i] = CLOSE;
			else
				prison[i] = OPEN;
		}
	}
	for (int i = 1; i <= n; i++)
		if (prison[i] == OPEN)
			answer++;
	std::cout << answer << "\n";
}

void input()
{
	std::cin >> n;
	prison = std::vector<int>(n + 1, OPEN);
	solution();
}

int main(void)
{
	int t;

	input_setting();
	std::cin >> t;
	for (int i = 0; i < t; i++)
		input();
	return (0);
}
