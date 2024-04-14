#include <iostream>
using namespace std;

int n, m;
bool visited[8];
int answer[8];

void dfs(int depth) {
	if (depth == m) {
		for (int i = 0; i < m; i++)
			cout << answer[i] << " ";
		cout << "\n";
	}
	for (int i = 0; i < n; i++) {
		if (!visited[i]) {
			visited[i] = true;
			answer[depth] = i + 1;
			dfs(depth + 1);
			visited[i] = false;
		}
	}
}

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;

	dfs(0);
}