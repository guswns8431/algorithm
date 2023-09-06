#include <iostream>
#include <vector>
using namespace std;

int row, col;
vector<vector<int> > board;
vector<vector<int> > visited;

void dfs(int i, int j)
{
	if (i < 0 || i >= row || j < 0 || j >= col || visited[i][j] == 1 || board[i][j] == 0)
		return ;
	visited[i][j] = 1;
	dfs(i - 1, j);
	dfs(i - 1, j + 1);
	dfs(i, j + 1);
	dfs(i + 1, j + 1);
	dfs(i + 1, j);
	dfs(i + 1, j - 1);
	dfs(i, j - 1);
	dfs(i - 1, j - 1);
}

int main(void)
{
	int answer = 0;
    
    ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);

	for (;;)
	{
		cin >> col >> row;
		if (col == 0 && row == 0)
			break ;
		board.clear();
		visited.clear();
		board.resize(row, vector<int>(col, 0));
		visited = board;
		for (int i = 0; i < row; i++)
			for (int j = 0; j < col; j++)
				cin >> board[i][j];

		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				if (board[i][j] == 1 && visited[i][j] == 0)
				{
					answer++;
					dfs(i, j);
				}
			}
		}
		cout << answer << "\n";
		answer = 0;
	}
	return (0);
}