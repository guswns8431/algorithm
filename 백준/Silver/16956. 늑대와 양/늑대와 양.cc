#include <iostream>
#include <vector>
#include <utility>
#include <string>
using namespace std;

int r,c;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};
vector<vector<char> > board;

void dfs(int row, int col) {
	for (int i = 0; i < 4; i++) {
		int nextRow = row + dy[i];
		int nextCol = col + dx[i];

		if (nextRow < 0 || nextRow >= r || nextCol < 0 || nextCol >= c)
			continue ;
		if (board[nextRow][nextCol] == '.') {
			board[nextRow][nextCol] = 'D';
			dfs(nextRow, nextCol);
		}
	}
}


int main(void) {
	string input;
	vector<pair<int, int> > wolfPosition;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> r >> c;
	board.resize(r, vector<char>(c));
	for (int i = 0; i < r; i++) {
		cin >> input;
		for (int j = 0; j < c; j++) {
			board[i][j] = input[j];
        }
    }
    for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (board[i][j] == 'W') {
				for (int k = 0; k < 4; k++) {
					int nx = j + dx[k];
					int ny = i + dy[k];
					if (ny < 0 || ny >= r || nx < 0 || nx >= c)
						continue ;
					if (board[ny][nx] == 'S') {
						cout << "0";
						return (0);
					}
				}
				wolfPosition.push_back({i, j});
			}
		}
	}

	for (unsigned int i = 0; i < wolfPosition.size(); i++) {
		dfs(wolfPosition[i].first, wolfPosition[i].second);
	}

	cout << "1\n";
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout << board[i][j];
		}
		cout << "\n";
	}
	return (0);
}