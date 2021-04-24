#include <iostream>
#include <vector>

int n, s;
std::vector<int> input_arr;
int answer = 0;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> n >> s;
	input_arr.resize(n);
	for (int i = 0; i < n; i++)
		std::cin >> input_arr[i];
}

void solution(int index, int sum)
{
	sum += input_arr[index];

	if (index >= n)
		return ;
	if (sum == s)
		++answer;
	solution(index + 1, sum - input_arr[index]);
	solution(index + 1, sum);
}

void print()
{
	std::cout << answer;
}

int main(void)
{
	input_setting();
	input();
	solution(0, 0);
	print();
	return (0);
}
