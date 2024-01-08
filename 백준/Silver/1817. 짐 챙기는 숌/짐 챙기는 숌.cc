#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	int n, m;
	int input;
	int answer = 0;
	queue<int> boxes;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> input;
		boxes.push(input);
	}

	while (!boxes.empty()) {
		int totalWeight = 0;
		while (totalWeight < m) {
			if (boxes.empty()) {
				if (totalWeight != 0)
					answer++;
				break ;
			}
			if (totalWeight + boxes.front() > m) {
				answer++;
				break ;
			}
			if (totalWeight + boxes.front() == m)
				answer++;
			totalWeight += boxes.front();
			boxes.pop();
		}
	}
	cout << answer;
	return (0);
}