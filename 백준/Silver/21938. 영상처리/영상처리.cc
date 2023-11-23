#include <iostream>
#include <queue>
#include <vector>
#include <utility>
using namespace std;

int n, m, t;
vector<vector<int> > map;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

void bfs(int row, int col) {
	queue<pair<int, int>> q;

	q.push({row, col});
	map[row][col] = 0;

	while(!q.empty()) {
		int currentRow = q.front().first;
		int currentCol = q.front().second;

		q.pop();
		for (int i = 0; i < 4; i++) {
			int nextRow = currentRow + dy[i];
			int nextCol = currentCol + dx[i];

			if (nextRow < 0 || nextRow >= n || nextCol < 0 || nextCol >= m)
				continue ;
			if (map[nextRow][nextCol] == 0)
				continue ;
			map[nextRow][nextCol] = 0;
			q.push({nextRow, nextCol});
		}
	}
}


int main(void) {
	int input;
	int answer = 0;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;

	map.resize(n, vector<int>(m, 0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			for (int k = 0; k < 3; k++) {
				cin >> input;
				map[i][j] += input;
			}
			map[i][j] /= 3;
		}
	}
	cin >> t;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (map[i][j] >= t)
				map[i][j] = 255;
			else
				map[i][j] = 0;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (map[i][j] == 255) {
				answer++;
				bfs(i, j);
			}
		}
	}

	cout << answer;
	return (0);
}