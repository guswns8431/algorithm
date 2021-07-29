#include <iostream>
#include <vector>

int n, k;
std::vector<int> temp;
int answer = -999999999;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> n >> k;
	temp.resize(n);
	for (int i = 0; i < n; i++)
		std::cin >> temp[i];
}

void solution()
{
	int tmp;

	for (int i = 0; i <= n - k; i++)
	{
		tmp = 0;
		for (int j = 0; j < k; j++)
			tmp += temp[i + j];
		if (answer < tmp)
			answer = tmp;
	}
}

void print()
{
	std::cout << answer;
}

int main(void)
{
	input_setting();
	input();
	solution();
	print();
	return (0);
}
