#include <iostream>
#include <vector>
#include <algorithm>

int n, x;
std::vector<int> arr;
int answer = 0; 

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> n;
	arr.resize(n);
	for (int i = 0; i < n; i++)
		std::cin >> arr[i];
	std::cin >> x;
}

void solution()
{
	int i = 0;
	int j = n - 1;
	std::sort(arr.begin(), arr.end());
	while (i < j)
	{
		if (arr[i] + arr[j] > x)
			--j;
		else if (arr[i] + arr[j] == x)
		{
			--j;
			++i;
			++answer;
		}
		else
			++i;
	}

}

void print()
{
	std::cout << answer;
}

int main(void)
{
	input_setting();
	input();
	solution();
	print();
	return (0);
}
