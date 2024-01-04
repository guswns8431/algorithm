#include <iostream>
#include <vector>

int n, k;
std::vector<int> input_coin;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> n >> k;
	input_coin.resize(n);
	for (int i = 0; i < n; i++)
		std::cin >> input_coin[i];
}

void solution()
{
	int answer;

	answer = 0;
	for (int i = n - 1; i >= 0; i--)
	{
		if (input_coin[i] > k)
			continue;
		answer += k / input_coin[i];
		k %= input_coin[i];
	}
	std::cout << answer;
}

int main(void)
{
	input_setting();
	input();
	solution();
	return (0);
}
