#include <iostream>
#include <vector>

int n;
std::vector<int> line;
std::vector<int> input_arr;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> n;
	line.resize(n, -1);
	input_arr.resize(n);
	for (int i = 0; i < n; i++)
		std::cin >> input_arr[i];
}

void print()
{
	for (int i = 0; i < n; i++)
		std::cout << line[i] << " ";
}

void solution()
{
	int j;

	line[input_arr[0]] = 1;
	for (int i = 1; i < n; i++)
	{
		j = i;
		while (line[input_arr[j]] != -1)
			++input_arr[j];
		line[input_arr[j]] = i + 1;
	}
	print();
}

int main(void)
{
	input_setting();
	input();
	solution();
	return (0);
}
