#include <iostream>
#include <vector>
#include <queue>

int n, w, l;
std::vector<int> truck;
std::queue<int> bridge;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> n >> w >> l;
	truck.resize(n);
	for (int i = 0; i < n; i++)
		std::cin >> truck[i];
}

void solution()
{
	int answer;
	int total_weight;

	answer = 0;
	total_weight = 0;
	for (int i = 0; i < n; i++)
	{
		while (1)
		{
			if (bridge.size() == w)
			{
				total_weight -= bridge.front();
				bridge.pop();
			}
			if (total_weight + truck[i] <= l)
				break;
			bridge.push(0);
			answer++;
		}
		bridge.push(truck[i]);
		total_weight += truck[i];
		answer++;
	}
	std::cout << answer + w;
}

int main(void)
{
	input_setting();
	input();
	solution();
	return (0);
}