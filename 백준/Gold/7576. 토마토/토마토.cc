#include <iostream>
#include <queue>
#include <utility>
#include <algorithm>
using namespace std;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
int m, n;
int tomato[1001][1001];
queue<pair<int, int> > q; //col, row
int answer = 0;

void bfs() {
	
	while (!q.empty()) {
		int currentCol = q.front().first;
		int currentRow = q.front().second;

		q.pop();
		for (int i = 0; i < 4; i++) {
			int nextCol = currentCol + dx[i];
			int nextRow = currentRow + dy[i];

			if (nextCol <= 0 || nextRow <= 0 || nextCol > m || nextRow > n)
				continue;
			if (tomato[nextRow][nextCol] >= 1 || tomato[nextRow][nextCol] == -1)
				continue;
			tomato[nextRow][nextCol] = tomato[currentRow][currentCol] + 1;
			answer = max(answer, tomato[nextRow][nextCol]);
			q.push({ nextCol, nextRow });
		}
	}
}

int main(void) {
	bool zeroFlag = false;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> m >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> tomato[i][j];
			if (tomato[i][j] == 1)
				q.push({ j, i });
			else if (tomato[i][j] == 0)
				zeroFlag = true;
		}
	}

	if (zeroFlag) {
		bfs();
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				if (tomato[i][j] == 0) {
					cout << "-1";
					return (0);
				}
			}
		}
		cout << answer - 1;
	}
	else
		cout << "0";
	return (0);
}