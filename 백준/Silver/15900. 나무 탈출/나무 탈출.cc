#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > tree;
vector<bool> visited;
int cnt = 0;

void dfs(int node, int depth) {
	if (tree[node].size() == 1 && visited[tree[node][0]]) {
		if (depth % 2 == 1)
			cnt++;
		return ;
	}
	for (unsigned int i = 0; i < tree[node].size(); i++) {
		int nextNode = tree[node][i];

		if (visited[nextNode])
			continue ;
		visited[nextNode] = true;
		dfs(nextNode, depth + 1);
		visited[nextNode] = false;
	}
}

int main(void) {
	int n;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;

	tree.resize(n + 1);
	visited.resize(n + 1);

	for (int i = 0; i < n - 1; i++) {
		int input1, input2;

		cin >> input1 >> input2;
		tree[input1].push_back(input2);
		tree[input2].push_back(input1);
	}

	visited[1] = true;
	dfs(1, 0);

	if (cnt % 2 == 1)
		cout << "Yes";
	else
		cout << "No";
	return (0);
}