#include <iostream>
#include <vector>
#include <algorithm>

int n;
std::vector<int> a;
std::vector<int> dp;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	int i;

	i = -1;
	std::cin >> n;
	a.resize(n);
	dp.resize(n, 1);
	while (++i < n)
		std::cin >> a[i];
}

void solution()
{
	int i;
	int j;
	int ans;

	ans = 1;
	i = -1;
	while (++i < n)
	{
		j = -1;
		while (++j < i)
		{
			if (a[i] > a[j])
				dp[i] = std::max(dp[i], dp[j] + 1);
		}
		ans = std::max(ans, dp[i]);
	}
	std::cout << ans;
}

int main(void)
{
	input_setting();
	input();
	solution();
	return (0);
}
