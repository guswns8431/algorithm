#include <iostream>
#include <algorithm>
#include <vector>

int n;
std::vector<int> line;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> n;
	line.resize(n);
	for (int i = 0; i < n; i++)
		std::cin >> line[i];
}

void solution()
{
	int sum;

	sum = 0;
	std::sort(line.begin(), line.end());
	for (int i = 0; i < n; i++)
		sum += line[i] * (n - i);
	std::cout << sum;
}

int main(void)
{
	input_setting();
	input();
	solution();
	return (0);
}