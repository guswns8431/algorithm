#include <iostream>
#include <vector>

std::vector<long long>	v;
long long		max;
long long		k,n;

void	ft_binary_search()
{
	long long	start;
	long long	end;
	long long	mid;
	long long	i;
	long long	count;
	long long	result;

	start = 1;
	end = max;
	result = 0;
	while (start <= end)
	{
		i = -1;
		count = 0;
		mid = (start + end) / 2;
		while (++i < k)
			count += (v[i] / mid);
		if (count >= n)
		{	
			if (result < mid)
				result = mid;
			start = mid + 1;
		}
		else
			end = mid - 1;
	}
	std::cout << result;
}


int	main(void)
{
	long long	i;
	int	input;

	i = -1;
	max = 0;
	std::cin >> k >> n;
	while (++i < k)
	{
		std::cin >> input;
		v.push_back(input);
		if (input > max)
			max = input;
	}
	ft_binary_search();
	return (0);
}
