#include <iostream>
#include <unordered_set>
#include <vector>

int t;
int n;
std::unordered_set<int> n1;
std::vector<int> n2;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void solution()
{
	for (int i = 0; i < n; i++)
	{
		if (n1.find(n2[i]) != n1.end())
			std::cout << "1\n";
		else
			std::cout << "0\n";
	}
}

void input()
{
	int tmp;

	std::cin >> t;
	for (int j = 0; j < t; j++)
	{
        n1.clear();
		std::cin >> n;
		for (int i = 0; i < n; i++)
		{
			std::cin >> tmp;
			n1.insert(tmp);
		}
		std::cin >> n;
		n2.resize(n);
		for (int i = 0; i < n; i++)
			std::cin >> n2[i];
		solution();
	}
}

int main(void)
{
	input_setting();
	input();
	return (0);
}
