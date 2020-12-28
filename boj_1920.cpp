#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	int num;
	int tmp;
	std::vector<int> a;

	std::cin >> num;
	for (int i = 0; i < num; i++)
	{
		std::cin >> tmp;
		a.push_back(tmp);
	}
	std::sort(a.begin(), a.end());
	std::cin >> num;
	for (int i = 0; i < num; i++)
	{
		std::cin >> tmp;
		std::cout << binary_search(a.begin(), a.end(), tmp) << "\n";
	}
	return (0);
}
