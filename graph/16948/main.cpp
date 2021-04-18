#include <iostream>
#include <vector>
#include <queue>

int n;
std::vector<std::vector<int> > visited;
std::vector<std::vector<int> > answer;
int r1, r2, c1, c2;
std::queue<std::pair<int, int> > q;
int dx[6] = {-2, -2, 0, 0, 2, 2};
int dy[6] = {-1, 1, -2, 2, -1, 1};

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> n;
	visited.resize(n, std::vector<int>(n));
	answer.resize(n, std::vector<int>(n, -1));
	std::cin >> r1 >> c1 >> r2 >> c2;
}

void solution()
{
	int current_row, current_col;
	int next_row, next_col;

	visited[r1][c1] = 1;
	q.push(std::make_pair(r1, c1));
	answer[r1][c1] = 0;
	while (!q.empty())
	{
		current_row = q.front().first;
		current_col = q.front().second;
		q.pop();
		for (int i = 0; i < 6; i++)
		{
			next_row = current_row + dx[i];
			next_col = current_col + dy[i];
			if (next_row < n && next_row >= 0 && next_col < n && next_col >= 0) 
			{
				if (!visited[next_row][next_col])
				{
					q.push(std::make_pair(next_row, next_col));
					visited[next_row][next_col] = 1;
					answer[next_row][next_col] = answer[current_row][current_col] + 1;
				}
			}
		}
	}
	std::cout << answer[r2][c2];
}

int main(void)
{
	input_setting();
	input();
	solution();
	return (0);
}
