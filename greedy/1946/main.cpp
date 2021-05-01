#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

int t;
int n;
std::vector<std::pair<int, int> > score;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> n;
	score.resize(n);
	for (int i = 0; i < n; i++)
		std::cin >> score[i].first >> score[i].second;
}

void solution()
{
	int limit;
	int count = 1;

	sort(score.begin(),score.end());
	limit = score[0].second;
	for (int i = 1; i < n; i++)
	{
		if (limit > score[i].second)
		{
			++count;
			limit = score[i].second;
		}
	}
	std::cout << count << "\n";
}

int main(void)
{
	input_setting();
	std::cin >> t;
	for (int i = 0; i < t; i++)
	{
		input();
		solution();
	}
	return (0);
}
