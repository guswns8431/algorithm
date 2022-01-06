#include <iostream>
#include <algorithm>

int t;
std::string str;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> t;
}

int is_palin()
{
	int len = str.size();

	for (int i = 0; i < len / 2; i++)
		if (str[i] != str[len - 1 - i])
			return (0);
	return (1);
}

int is_near_palin(int start, int end, bool flag)
{
	if (start > end)
		return (1);
	if (str[start] == str[end])
		return (is_near_palin(start + 1, end - 1, flag));
	if (!flag)
		return (std::max(is_near_palin(start + 1, end, 1), is_near_palin(start, end - 1, 1)));
	else
		return (0);
}

int check_palin()
{
	if (is_palin())
		return (0);
	if (is_near_palin(0, str.size() - 1, 0))
		return (1);
	return (2);
}

void solution()
{
	while (t--)
	{
		std::cin >> str;
		std::cout << check_palin() << "\n";
	}
}

int main(void)
{
	input_setting();
	input();
	solution();
	return (0);
}
