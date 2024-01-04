#include <iostream>
#include <vector>

int n,m;
std::vector<std::string> a;
std::vector<std::string> b;
int answer = 0;

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
	for (int i = 0; i < n; i++)
	{
		std::cin >> str;
		a.push_back(str);
	}
	for (int i = 0; i < n; i++)
	{
		std::cin >> str;
		b.push_back(str);
	}
}

void reverse(int indexI, int indexJ)
{
	++answer;
	for (int i = indexI; i < indexI + 3; i++)
		for (int j = indexJ; j < indexJ + 3; j++)
		{
			if (a[i][j] == '0')
				a[i][j] = '1';
			else
				a[i][j] = '0';
		}
}

void check_matrix()
{
	bool flag = true;

	for (int i = 0; i < n; i++)
		if (flag)
			for (int j = 0; j < m; j++)
				if (a[i][j] != b[i][j])
				{
					std::cout << "-1";
					flag = false;
					break ;
				}
	if (flag)
		std::cout << answer;
}

void solution()
{
	for (int i = 0; i < n - 2; i++)
		for (int j = 0; j < m - 2; j++)
			if (a[i][j] != b[i][j])
				reverse(i , j);
	check_matrix();
}

int main(void)
{
	input_setting();
	input();
	solution();
	return (0);
}
