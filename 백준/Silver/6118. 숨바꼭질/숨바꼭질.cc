#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <algorithm>
using namespace std;

vector<vector<int> > board;
vector<pair<int, int> > visited;

void bfs(int start) {
	queue<int> q;

	q.push(start);
	visited[start].first++;
	visited[start].second = start;

	while (!q.empty()) {
		int current = q.front();

		q.pop();
		for (unsigned int i = 0; i < board[current].size(); i++) {
			int next = board[current][i];

			if (visited[next].first != -1)
				continue ;
			q.push(next);
			visited[next].first = visited[current].first + 1;
			visited[next].second = next;
		}
	}
}


bool cmp(const pair<int, int> &a, const pair<int, int> &b) {
	if (a.first == b.first)
		return (a.second < b.second);
	return (a.first > b.first);
}

int main(void) {
	int n, m;
	int answerCount = 1;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	board.resize(n + 1);
	visited.resize(n + 1, pair<int, int>(-1, 0));

	for (int i = 0; i < m; i++) {
		int input1, input2;

		cin >> input1 >> input2;
		board[input1].push_back(input2);
		board[input2].push_back(input1);
	}

	bfs(1);
	sort(visited.begin(), visited.end(), cmp);

	for (int i = 1; i <= n; i++)
		if (visited[0].first == visited[i].first)
			answerCount++;
	cout << visited.begin()->second << " " << visited.begin()->first << " " << answerCount;
	return (0);
}