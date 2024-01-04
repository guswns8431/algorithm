#include <iostream>
#include <queue>

std::priority_queue<int> pq;
int n;

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

void solution()
{
	int x;

	while (n--)
	{
		std::cin >> x;
		if (x == 0)
		{
			if(pq.empty())
				std::cout << "0\n";
			else
			{
				std::cout << pq.top();
				pq.pop();
				std::cout << "\n";
			}
		}
		else
			pq.push(x);
	}
}

int main(void)
{
	input_setting();
	input();
	solution();
	return (0);
}
