#include <iostream>
#include <vector>
#include <algorithm>

int n,m;
std::vector<long long> tree;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> n >> m;
	tree.resize(n);
	for (int i = 0; i < n; i++)
		std::cin >> tree[i];
}

void solution()
{
	int start;
	int end;
	int mid;
	long long sum;
	int result;

	start = 0;
	end = *std::max_element(tree.begin(), tree.end());
	while (start <= end)
	{
		sum = 0;
		mid = (start + end) / 2;
		for (int i = 0; i < n; i++)
			if (tree[i] - mid > 0)
				sum += (tree[i] - mid);
		if (sum >= m)
		{
			start = mid + 1;
			result = mid;
		}
		else
			end = mid - 1;
	}
	std::cout << result;
}

int main(void)
{
	input_setting();
	input();
	solution();
	return (0);
}
