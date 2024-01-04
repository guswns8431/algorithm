#include <iostream>
#include <vector>
#include <set>

int n, m;
std::vector<std::string> a;
std::set<std::string> b;
std::set<std::string> answer;
int count = 0;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::string str;

	std::cin >> n >> m;
	a.resize(n);
	for (int i = 0; i < n; i++)
		std::cin >> a[i];
	for (int i = 0; i < m; i++)
	{
		std::cin >> str;
		b.insert(str);
	}
}

void solution()
{
	for (int i = 0; i < n; i++)
		if (b.find(a[i]) != b.end())
			answer.insert(a[i]);
}

void print()
{
	std::cout << answer.size() << "\n";
	for (auto iter = answer.begin(); iter != answer.end(); iter++)
		std::cout << *iter << "\n";
}

int main(void)
{
	input_setting();
	input();
	solution();
	print();
	return (0);
}
