#include <iostream>
#include <vector>
#include <queue>

int n;
std::priority_queue<int, std::vector<int>, std::less<int> > pq;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> n;
}

void zero()
{
	if (pq.empty())
	{
		std::cout << "0\n";
		return ;
	}
	std::cout << pq.top() << "\n";
	pq.pop();
}

void solution()
{
	int tmp;

	for (int i = 0; i < n; i++)
	{
		std::cin >> tmp;
		if (tmp == 0)
		{
			zero();
			continue ;
		}
		pq.push(tmp);
	}
}

int main(void)
{
	input_setting();
	input();
	solution();
	return (0);
}
