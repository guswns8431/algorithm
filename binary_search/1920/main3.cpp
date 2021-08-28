#include <iostream>
#include <vector>
#include <algorithm>

int n, m;
std::vector<long long> arr1;
std::vector<long long> arr2;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> n;
	arr1.resize(n);
	for (int i = 0; i < n; i++)
		std::cin >> arr1[i];
	std::cin >> m;
	arr2.resize(n);
	for (int i = 0; i < m; i++)
		std::cin >> arr2[i];
}

int bsearch(int i)
{
	int start = 0;
	int end = arr1[n - 1];
	while (start <= end)
	{
		int mid = (start + end) / 2;

		if (mid == i)
			return (1);
		else if (mid < i)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (0);
}

void solution()
{
	std::sort(arr1.begin(), arr1.end());
	for (int i = 0; i < m; i++)
		std::cout << bsearch(arr2[i]) << "\n";
}

int main(void)
{
	input_setting();
	input();
	solution();
	return (0);
}
