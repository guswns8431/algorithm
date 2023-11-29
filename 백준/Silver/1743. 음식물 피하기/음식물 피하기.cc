#include <iostream>
#include <vector>
using namespace std;

int n,m;
int result;
vector<vector<int> > board;
vector<vector<bool> > visited;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

void dfs(int row, int col) {
	visited[row][col] = true;
	result++;

	for (int i = 0; i < 4; i++) {
		int nextRow = row + dy[i];
		int nextCol = col + dx[i];

		if (nextRow < 1 || nextRow > n || nextCol < 1 || nextCol > m)
			continue ;
		if (visited[nextRow][nextCol] || board[nextRow][nextCol] == 0)
			continue ;
		dfs(nextRow, nextCol);
	}
}

int main(void) {
	int k;
	int input1, input2;
	int answer = 0;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m >> k;
	board.resize(n + 1, vector<int>(m + 1, 0));
	visited.resize(n + 1, vector<bool>(m + 1, false));
	for (int i = 0; i < k; i++) {
		cin >> input1 >> input2;
		board[input1][input2] = 1;
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (!visited[i][j] && board[i][j] == 1) {
				result = 0;
				dfs(i, j);
				if (result > answer)
					answer = result;
			}
		}
	}
	cout << answer;
}