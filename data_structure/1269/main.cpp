#include <iostream>
#include <unordered_set>

int a,b;
std::unordered_set<int> a_arr;
std::unordered_set<int> b_arr;
std::unordered_set<int> answer;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	int tmp;

	std::cin >> a >> b;
	for (int i = 0; i < a; i++)
	{
		std::cin >> tmp;
		a_arr.insert(tmp);
	}
	for (int i = 0; i < b; i++)
	{
		std::cin >> tmp;
		b_arr.insert(tmp);
	}
}

void solution()
{
	std::unordered_set<int> a_tmp(a_arr);
	std::unordered_set<int> b_tmp(b_arr);
	std::unordered_set<int>::iterator iter;

	for (iter = b_arr.begin(); iter != b_arr.end(); iter++)
		a_tmp.erase(*iter);
	for (iter = a_arr.begin(); iter != a_arr.end(); iter++)
		b_tmp.erase(*iter);
	for (iter = a_tmp.begin(); iter != a_tmp.end(); iter++)
		answer.insert(*iter);
	for (iter = b_tmp.begin(); iter != b_tmp.end(); iter++)
		answer.insert(*iter);
	std::cout << answer.size();
}

int main(void)
{
	input_setting();
	input();
	solution();
	return (0);
}
