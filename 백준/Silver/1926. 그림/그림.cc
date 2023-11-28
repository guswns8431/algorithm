#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector<vector<int> > board;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};
int result;

void dfs (int row, int col) {
	board[row][col] = 0;
	result++;
	for (int i = 0; i < 4; i++) {
		int nextRow = row + dy[i];
		int nextCol = col + dx[i];

		if (nextRow < 0 || nextRow >= n || nextCol < 0 || nextCol >= m)
			continue ;
		if (board[nextRow][nextCol] == 0)
			continue ;
		dfs(nextRow, nextCol);
	}
}

int main(void) {
	int paintCount = 0;
	int paintSize = 0;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	board.resize(n, vector<int>(m));

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> board[i][j];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (board[i][j] == 1) {
				result = 0;
				paintCount++;
				dfs(i, j);
				if (result > paintSize)
					paintSize = result;
			}
		}
	}
	cout << paintCount << "\n" << paintSize;
	return (0);
}