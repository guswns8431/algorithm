#include <iostream>
#include <set>

int n;
std::multiset<std::string> book;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::string tmp;

	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> tmp;
		book.insert(tmp);
	}

}

void solution()
{
	int max;
	std::string answer;

	max = 0;
	std::multiset<std::string>::iterator iter;

	for (iter = book.begin(); iter != book.end(); iter++)
	{
		if (max < static_cast<int>(book.count(*iter)))
		{
			answer = static_cast<std::string>(*iter);
			max = static_cast<int>(book.count(*iter));
		}
		// book.erase(*iter);
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
	
