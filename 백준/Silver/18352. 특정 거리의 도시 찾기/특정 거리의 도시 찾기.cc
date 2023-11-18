#include <iostream>
#include <queue>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int n, m, k, x;
vector<vector<int>> city;
vector<int> visited;
vector<int> answer;

void bfs(int cityNumber) {
	queue<int> q;

	q.push(cityNumber);

	while (!q.empty()) {
		int curNumber = q.front();

		q.pop();

		for (unsigned int i = 0; i < city[curNumber].size(); i++) {
			int nextNumber = city[curNumber][i];

			if (visited[nextNumber] == 0 && nextNumber != x) {
				visited[nextNumber] = visited[curNumber] + 1;
				if (visited[nextNumber] == k) {
					answer.push_back(nextNumber);
					continue;
				}
				q.push(nextNumber);
			}
		}
	}
}


int main(void) {
	int input1, input2;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m >> k >> x;
	city.resize(n + 1);
	visited.resize(n + 1);
	for (int i = 0; i < m; i++) {
		cin >> input1 >> input2;
		city[input1].push_back(input2);
	}

	bfs(x);

	if (answer.size() == 0)
		cout << "-1";
	else {
		sort(answer.begin(), answer.end());
		for (unsigned int i = 0; i < answer.size(); i++)
			cout << answer[i] << "\n";
	}
	return (0);
}