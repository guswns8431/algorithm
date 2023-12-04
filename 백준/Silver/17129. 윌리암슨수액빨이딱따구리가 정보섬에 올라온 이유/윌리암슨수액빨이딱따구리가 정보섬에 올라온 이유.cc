#include <iostream>
#include <queue>
#include <utility>
#include <vector>
#include <string>
using namespace std;

int n,m;
vector<string> board;
vector<vector<int> > visited;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

void bfs(int row, int col) {
	queue<pair<int, int> > q;

	q.push({row, col});
	visited[row][col] = 0;

	while (!q.empty()) {
		int currentRow = q.front().first;
		int currentCol = q.front().second;

		q.pop();
		for (int i = 0; i < 4; i++) {
			int nextRow = currentRow + dy[i];
			int nextCol = currentCol + dx[i];

			if (nextRow < 0 || nextRow >= n || nextCol < 0 || nextCol >= m)
				continue ;
			if (visited[nextRow][nextCol] != -1 || board[nextRow][nextCol] == '1')
				continue ;
			visited[nextRow][nextCol] = visited[currentRow][currentCol] + 1;
			if (board[nextRow][nextCol] == '3' || board[nextRow][nextCol] == '4' || board[nextRow][nextCol] == '5')
			{
				cout << "TAK\n" << visited[nextRow][nextCol];
				return ;
			}
			q.push({nextRow, nextCol});
		}
	}
	cout << "NIE";
}

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	board.resize(n);
	visited.resize(n, vector<int>(m, -1));

	for (int i = 0; i < n; i++)
		cin >> board[i];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (board[i][j] == '2')
				bfs(i, j);
		}
	}
	return (0);
}