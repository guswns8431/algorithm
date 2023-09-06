#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<vector<int> > board;
vector<vector<int> > checked;

void dfs(int i, int j, int k)
{
	if (j < 0 || j >= n || k < 0 || k >= n || board[j][k] <= i || checked[j][k] == 1)
		return ;
	checked[j][k] = 1;
	dfs(i, j - 1, k);
	dfs(i, j - 1, k);
	dfs(i, j, k + 1);
	dfs(i, j + 1, k);
	dfs(i, j, k - 1);
}

int main(void)
{
	int max_num = 0;
	int tmp;
	int answer = 0;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	board.resize(n, vector<int>(n));
    checked.resize(n, vector<int>(n));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> board[i][j];
			max_num = max(board[i][j], max_num);
		}
	}
	for (int i = 0; i < max_num; i++)
	{
		tmp = 0;
		fill(checked.begin(), checked.end(), vector<int>(n, 0));
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				if (board[j][k] > i && checked[j][k] == 0)
				{
					tmp++;
					dfs(i, j, k);
				}
			}
		}
		answer = max(answer, tmp);
	}
	cout << answer;
	return (0);
}