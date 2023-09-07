#include <iostream>
#include <queue>
#include <utility>
#include <algorithm>
using namespace std;

int m,n;
int board[51][51];
bool visited[51][51];

int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

void bfs(int y, int x)
{
	queue<pair<int, int>> q;
	int cur_x;
	int cur_y;
	int next_x;
	int next_y;

	visited[y][x] = true;

	q.push({y, x});
	while (!q.empty())
	{
		cur_x = q.front().second;
		cur_y = q.front().first;
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			next_x = cur_x + dx[i];
			next_y = cur_y + dy[i];
			if (next_x < 0 || next_x > m || next_y < 0 || next_y > n || board[next_y][next_x] == 0 || visited[next_y][next_x])
				continue ;
			visited[next_y][next_x] = true;
			q.push({next_y, next_x});
		}
	}
}

int main(void)
{
	int t, k;
	int x, y;
	int answer;

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

	cin >> t;
	for (int i = 0; i < t; i++)
	{
		answer = 0;
		for (int j = 0; j <= n; j++)
		{
			for (int l = 0; l <= m; l++)
			{
				board[j][l] = 0;
				visited[j][l] = 0;
			}
		}
		cin >> m >> n >> k;
		for (int j = 0; j < k; j++)
		{
			cin >> x >> y;
			board[y][x] = 1;
		}
		for (int j = 0; j <= n; j++)
		{
			for (int l = 0; l <= m; l++)
			{
				if (board[j][l] == 1 && !visited[j][l])
				{
					bfs(j, l);
					answer++;
				}
			}
		}
		cout << answer << "\n";
	}
	return (0);
}