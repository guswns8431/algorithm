#include <iostream>
#include <string>
#include <queue>
#include <utility>
using namespace std;

#define MAX 101
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};
bool visited[MAX][MAX];
int map[MAX][MAX];
int answer = 10001;
int n,m;

void bfs()
{
	queue<pair<int,int>> q;
	q.push({1, 1});

	while(!q.empty())
	{
		int cur_row = q.front().first;
		int cur_col = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int next_row = cur_row + dy[i];
			int next_col = cur_col + dx[i];

			if (next_row <= 0 || next_row > n || next_col <= 0 || next_col > m || visited[next_row][next_col])
				continue ;
			if (map[next_row][next_col] == 0)
				continue ;
			visited[next_row][next_col] = true;
			map[next_row][next_col] = map[cur_row][cur_col] + 1;
			q.push({next_row, next_col});
		}
	}
}

int main(void)
{
	string input;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;

	for (int i = 1; i <= n; i++)
	{
		cin >> input;
		for (int j = 1; j <= m; j++)
			map[i][j] = input[j - 1] - '0';
	}

	bfs();
	cout << map[n][m];
	return (0);
}
