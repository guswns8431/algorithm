#include <iostream>
#include <queue>
#include <vector>
#include <utility>
using namespace std;

vector<vector<int> > board;
int input1, input2;
int n, m;

int dx[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int dy[8] = {-2, -1, 1, 2, 2, 1, -1, -2};

void bfs(int row, int col) {
	queue<pair<int, int> > q;

	q.push({row, col});
	board[row][col] = 0;

	while (!q.empty()) {
		int currentRow = q.front().first;
		int currentCol = q.front().second;

		q.pop();
		for (int i = 0; i < 8; i++) {
			int nextRow = currentRow + dy[i];
			int nextCol = currentCol + dx[i];

			if (nextRow <= 0 || nextRow > n || nextCol <= 0 || nextCol > n)
				continue ;
			if (board[nextRow][nextCol] != -1)
				continue ;
			board[nextRow][nextCol] = board[currentRow][currentCol] + 1;
			q.push({nextRow, nextCol});
		}
	}
}

int main(void) {
	int knightRowPosition, knightColPosition;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	cin >> knightRowPosition >> knightColPosition;

	board.resize(n + 1, vector<int>(n + 1, -1));

	bfs(knightRowPosition, knightColPosition);
	for (int i = 0; i < m; i++) {
		cin >> input1 >> input2;
		cout << board[input1][input2] << " ";
	}
	return (0);
}