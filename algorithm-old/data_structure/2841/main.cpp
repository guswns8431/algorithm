#include <iostream>
#include <stack>

int n, p;
std::stack<int> s[7];
int answer = 0;

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> n >> p;
}

void solution()
{
	int a, b;

	for (int i = 0; i < n; i++)
	{
		std::cin >> a >> b;
		if (s[a].empty())
		{
			s[a].push(b);
			answer++;
		}
		else
		{
			if (s[a].top() < b)
			{
				s[a].push(b);
				answer++;
			}
			else if (s[a].top() == b)
				continue ;
			else
			{
				while (!s[a].empty() && b < s[a].top())
				{
					s[a].pop();
					answer++;
				}

				if (!s[a].empty() && s[a].top() == b)
					continue ;
				s[a].push(b);
				answer++;
			}
		}
	}
}

void print()
{
	std::cout << answer << "\n";
}

int main(void)
{
	input_setting();
	input();
	solution();
	print();
	return (0);
}
