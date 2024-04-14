#include <iostream>
using namespace std;

int n, m;
int arr[8];
bool visited[8];

void dfs(int depth, int index) {
	if (depth == m) {
		for (int i = 0; i < m; i++)
			cout << arr[i] << " ";
		cout << "\n";
		return ;
	}
	for (int i = index; i < n; i++) {
		if (visited[i])
			continue ;
		visited[i] = true;
		arr[depth] = i + 1;
		dfs(depth + 1, i + 1);
		visited[i] = false;
	}
}

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;

	dfs(0, 0);
	return (0);
}