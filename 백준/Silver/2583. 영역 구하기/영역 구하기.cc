#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int m,n;
int board[100][100];
int visited[100][100];
int count_num;

void dfs(int i, int j)
{
	if (i < 0 || i >= m || j < 0 || j >= n || board[i][j] == 1 || visited[i][j] == 1)
		return ;
	visited[i][j] = 1;
	count_num++;
	dfs(i - 1, j);
	dfs(i, j + 1);
	dfs(i + 1, j);
	dfs(i, j - 1);
}

int main(void)
{
	int k;
	int x1, y1, x2, y2;
	int answer = 0;
	vector<int> area;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> m >> n >> k;
	for (int i = 0; i < k; i++)
	{
		cin >> x1 >> y1 >> x2 >> y2;

		for (int i = y1; i < y2; i++)
		{
			for (int j = x1; j < x2; j++)
			{
				board[i][j] = 1;
			}
		}
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			count_num = 0;
			if (board[i][j] == 0 && visited[i][j] == 0)
			{
				answer++;
				dfs(i, j);
				area.push_back(count_num);
			}
		}
	}

	sort(area.begin(), area.end());
	cout << answer << "\n";
	for (int i = 0; i < answer; i++)
		cout << area[i] << " ";
	return (0);
}