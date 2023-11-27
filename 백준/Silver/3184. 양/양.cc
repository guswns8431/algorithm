#include <iostream>
#include <vector>
#include <string>
using namespace std;

int r, c;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};
int tmpSheepCount = 0;
int tmpWolfCount = 0;
vector<string> map;

void dfs(int currentRow, int currentCol) {
	if (map[currentRow][currentCol] == 'v')
		tmpWolfCount++;
	else if (map[currentRow][currentCol] == 'o')
		tmpSheepCount++;
	map[currentRow][currentCol] = '#';

	for (int i = 0; i < 4; i++) {
		int nextRow = currentRow + dy[i];
		int nextCol = currentCol + dx[i];

		if (nextRow < 0 || nextRow >= r || nextCol < 0 || nextCol >= c)
			continue ;
		if (map[nextRow][nextCol] == '#')
			continue ;
		dfs(nextRow, nextCol);
	}
}


int main(void) {
	int sheepCount = 0;
	int wolfCount = 0;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> r >> c;

	map.resize(r);
	for (int i = 0; i < r; i++)
		cin >> map[i];

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (map[i][j] != '#') {
				tmpSheepCount = 0;
				tmpWolfCount = 0;
				dfs(i, j);
				if (tmpSheepCount > tmpWolfCount)
					sheepCount += tmpSheepCount;
				else
					wolfCount += tmpWolfCount;
			}
		}
	}
	cout << sheepCount << " " << wolfCount;
	return (0);
}