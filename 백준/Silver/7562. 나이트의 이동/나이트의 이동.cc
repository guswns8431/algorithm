#include <iostream>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

int dx[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int dy[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
int l;
vector<vector<int> > board;
int targetRow, targetCol;

void bfs(int row, int col) {
	queue<pair<int, int> > q;

	q.push({row, col});
	board[row][col] = 0;

	while (!q.empty()) {
		int currentRow = q.front().first;
		int currentCol = q.front().second;
		if (currentRow == targetRow && currentCol == targetCol) {
			cout << board[currentRow][currentCol] << "\n";
			return ;
		}

		q.pop();

		for (int i = 0; i < 8; i++) {
			int nextRow = currentRow + dy[i];
			int nextCol = currentCol + dx[i];

			if (nextRow < 0 || nextRow >= l || nextCol < 0 || nextCol >= l)
				continue ;
			if (board[nextRow][nextCol] != -1)
				continue ;
			board[nextRow][nextCol] = board[currentRow][currentCol] + 1;
			q.push({nextRow, nextCol});
		}
	}
}



int main(void) {
	int t;
	int startRow, startCol;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> l;
		board.resize(l, vector<int>(l));
		fill(board.begin(), board.end(), vector<int>(l, -1));
		cin >> startRow >> startCol;
		cin >> targetRow >> targetCol;

		bfs(startRow, startCol);
	}
	return (0);
}