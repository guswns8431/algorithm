#include <iostream>
#include <vector>
#include <queue>
#include <utility>
using namespace std;

int s,e;
vector<vector<int> > station;
vector<int> visited;

void bfs() {
	queue<int> q;

	q.push(s);
	visited[s] = 0;

	while(!q.empty()) {
		int currentStation = q.front();
		q.pop();

		for (unsigned int i = 0; i < station[currentStation].size(); i++) {
			int nextStation = station[currentStation][i];

			if (visited[nextStation] != -1)
				continue ;
			visited[nextStation] = visited[currentStation] + 1;
			q.push(nextStation);
		}
	}
}

int main(void)
{
	int n,m;
	int x,y;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	cin >> s >> e;

	station.resize(n + 1);
	visited.resize(n + 1, -1);
	for (int i = 0; i < m; i++) {
		cin >> x >> y;
		station[x].push_back(y);
		station[y].push_back(x);
	}
	for (int i = 1; i <= n; i++) {
		if (i + 1 <= n) {
			station[i].push_back(i + 1);
			station[i + 1].push_back(i);
		}
		if (i - 1 >= 2) {
			station[i].push_back(i - 1);
			station[i - 1].push_back(i);
		}
	}

	bfs();

	cout << visited[e];

	return (0);
}