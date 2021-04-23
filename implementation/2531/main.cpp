#include <iostream>
#include <vector>
#include <algorithm>

int n, d, k, c;
std::vector<int> sushi;
std::vector<int> check_sushi;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> n >> d >> k >> c;
	sushi.resize(n);
	check_sushi.resize(d);
	for (int i = 0; i < n; i++)
		std::cin >> sushi[i];
}

void solution()
{
	int start = 0, check;
	int flag;
	int answer = 0;
	int overlap;

	while (start < n)
	{
		std::fill(check_sushi.begin(), check_sushi.end(), 0);
		check = start;
		flag = 1;
		overlap = 0;
		while (check < start + k)
		{
			if (sushi[check % n] == c)
				flag = 0;
			if (check_sushi[sushi[check % n]] == 1)
				++overlap;
			else
				check_sushi[sushi[check % n]] = 1;
			++check;
		}
		++start;
		answer = std::max(answer, k - overlap + flag);
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
