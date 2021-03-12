#include <ios>
#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	int a_num;
	int m_num;
	int tmp;
	std::vector<int> a;
	std::vector<int> m;

	std::cin >> a_num;
	for (int i = 0; i < a_num; i++)
	{
		std::cin >> tmp;
		a.push_back(tmp);
	}
	std::sort(a.begin(), a.end());
	std::cin >> m_num;
	for (int i = 0; i < m_num; i++)
	{
		std::cin >> tmp;
		m.push_back(tmp);
	}
	for (int i = 0; i < m_num; i++)
		std::cout << binary_search(a.begin(), a.end(), m[i]) << "\n";
	return (0);
}
