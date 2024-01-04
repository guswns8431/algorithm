#include <iostream>
#include <unordered_set>

int n;
int number[4] = {1, 5, 10, 50};
std::unordered_set<int> answer;

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

void solution(int num, int count,int index)
{
	int tmp;

	if (count == n)
	{
		answer.insert(num);
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		tmp = num + number[i];
		solution(tmp, count + 1, i);
	}
}

void print()
{
	std::cout << answer.size();
}

int main(void)
{
	input_setting();
	input();
	solution(0, 0, 0);
	print();
	return (0);
}
