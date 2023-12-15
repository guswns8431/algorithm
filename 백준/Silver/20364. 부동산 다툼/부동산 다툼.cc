#include <iostream>
#include <vector>
using namespace std;

int want;
int answer;
vector<bool> visited;

int main(void) {
	int n, q;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> q;
	visited.resize(n + 1);

	for (int i = 0; i < q; i++) {
		cin >> want;

		int tmp = want;
		int answer = 0;

		while (tmp > 1) {
			if (visited[tmp])
				answer = tmp;
			tmp /= 2;
		}
		if (answer == 0)
			visited[want] = true;
		cout << answer << "\n";
	}
	return (0);
}