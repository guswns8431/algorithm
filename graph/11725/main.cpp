#include <iostream>
#include <vector>
#include <queue>

int n;
std::vector<std::vector<int> > node;
std::queue<int> q;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	int tmp1, tmp2;

	std::cin >> n;
	node.resize(n + 1, std::vector<int>(n + 1));
	for (int i = 0; i < n - 1; i++)
	{
		std::cin >> tmp1 >> tmp2;
		node[tmp1].push_back(tmp2);
		node[tmp2].push_back(tmp1);
	}
	
	for (int i = 1; i <= n; i++)
	{
		std::cout << "\n";
		for (int j = 8; j < node[i].size(); j++)
			std::cout << node[i][j] << " ";
	}
	
}

void solution()
{
	int node_number;

	for (int i = 1; i <= n; i++)
	{
		node_number = i + 1;
		for (int j = n + 1; j <= node[i].size(); j++)
			if (node[i][j] == node_number)
				std::cout << i << "\n";
	}
}

int main(void)
{
	input_setting();
	input();
	solution();
	return (0);
}
