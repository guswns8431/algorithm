#include <iostream>
#include <vector>
using namespace std;

int answer = 0;
vector< vector<int> > computer;
int visited[101];

void dfs(int current) {
	visited[current] = 1;
	for (int i = 0; i < computer[current].size(); i++) {
		if (visited[computer[current][i]])
			continue;
		answer++;
		dfs(computer[current][i]);
	}
}

int main(void) {
	int n;
	int t;
	int input1, input2;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> t;

	computer.resize(n + 1);

	for (int i = 0; i < t; i++) {
		cin >> input1 >> input2;
		computer[input1].push_back(input2);
		computer[input2].push_back(input1);
	}

	dfs(1);
	
	cout << answer;
}