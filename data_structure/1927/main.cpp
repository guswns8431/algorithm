#include <iostream>
#include <vector>
#include <queue>

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void solution()
{
	int n;
	int num;
	std::priority_queue<int, std::vector<int>, std::greater<int> > pq;

	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> num;
		if (!num && pq.empty())
			std::cout << "0" << "\n";
		else if (!num)
		{
			std::cout << pq.top() << "\n";
			pq.pop();
		}
		else
			pq.push(num);
	}
}

int main(void)
{
	input_setting();
	solution();
	return (0);
}
