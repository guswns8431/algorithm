#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <string>
using namespace std;

int h,w;
vector<string> board;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

void bfs(int row, int col) {
	queue<pair<int, int> > q;

	q.push({row, col});

	while(!q.empty()) {
		int currentRow = q.front().first;
		int currentCol = q.front().second;

		q.pop();

		for (int i = 0; i < 4; i++) {
			int nextRow = currentRow + dy[i];
			int nextCol = currentCol + dx[i];

			if (nextRow < 0 || nextRow >= h || nextCol < 0 || nextCol >= w)
				continue ;
			if (board[nextRow][nextCol] != '#')
				continue ;
			board[nextRow][nextCol] = '.';
			q.push({nextRow, nextCol});
		}
	}
}



int main(void) {
	int t;
	int answer;
	string input;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> t;
	for (int i = 0; i < t; i++) {
		answer = 0;
		cin >> h >> w;

		board.resize(h);

		for (int j = 0; j < h; j++) {
			cin >> input;
			board[j] = input;
		}
		for (int j = 0; j < h; j++) {
			for (int k = 0; k < w; k++) {
				if (board[j][k] == '#') {
					answer++;
					bfs(j, k);
				}
			}
		}
		cout << answer << "\n";
	}
	return (0);
}