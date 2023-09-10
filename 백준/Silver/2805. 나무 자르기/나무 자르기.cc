#include <iostream>
#include <algorithm>
#include <vector>

std::vector<int>	v;
int			n,m;
int			max;

void parametric_search()
{
	int start;
	int end;
	int mid;
	long long sum;
	int result;
	int i;

	start = 1;
	end = max;
	result = 0;
	while (start <= end)
	{
		sum = 0;
		i = 0;
		mid = (start + end) / 2;
		while (i < n)
		{
			if (v[i] > mid)
				sum += v[i] - mid;
			i++;
		}
		if (sum >= m)
		{
			result = mid;
			start = mid + 1;
		}
		else
			end = mid - 1;
	}
	std::cout << result;
}

int main(void)
{
	int input;
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	std::cin >> n >> m;
	max = 0;
	for (int i = 0; i < n; i++)
	{
		std::cin >> input;
		v.push_back(input);
		if (max < input)
			max = input;
	}
	parametric_search();
	return (0);
}