#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int f, s, g, u, d;
int dx[2];
vector<int> office;

void bfs(int start) {
	queue<int> q;

	q.push(start);
	office[start] = 0;
	if (start == g) {
		cout << "0";
		return ;
	}

	while (!q.empty()) {
		int currentFloor = q.front();

		q.pop();
		for (int i = 0; i < 2; i++) {
			int nextFloor = currentFloor + dx[i];

			if (nextFloor <= 0 || nextFloor > f)
				continue ;
			if (office[nextFloor] != -1)
				continue ;
			office[nextFloor] = office[currentFloor] + 1;
			if (nextFloor == g) {
				cout << office[nextFloor];
				return ;
			}
			q.push(nextFloor);
		}
	}
	cout << "use the stairs";
}

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> f >> s >> g >> u >> d;
	office.resize(f + 1, -1);
	dx[0] = u;
	dx[1] = d * -1;

	bfs(s);
	return (0);
}