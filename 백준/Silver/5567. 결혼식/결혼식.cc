#include <iostream>
#include <vector>
#include <queue>
#include <utility>
using namespace std;

int answer = 0;
vector<vector<int> >relationship;
vector<bool> checked;

void bfs() {
	queue<pair<int,int> > q;

	q.push({1, 0});
	checked[1] = true;
	while (!q.empty()) {
		int currentNumber = q.front().first;
		int currentDepth = q.front().second;

		q.pop();

		for (unsigned int i = 0; i < relationship[currentNumber].size(); i++) {
			int nextNumber = relationship[currentNumber][i];
			int nextDepth = currentDepth + 1;

			if (checked[nextNumber])
				continue ;
			if (nextDepth >= 3)
				continue ;
			answer++;
			checked[nextNumber] = true;
			q.push({nextNumber, nextDepth});
		}
	}
}


int main(void) {
	int n, m;
	int input1, input2;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	cin >> m;
	relationship.resize(n + 1);
	checked.resize(n + 1);

	for (int i = 0; i < m; i++) {
		cin >> input1 >> input2;
		relationship[input1].push_back(input2);
		relationship[input2].push_back(input1);
	}

	bfs();

	cout << answer;

	return (0);
}