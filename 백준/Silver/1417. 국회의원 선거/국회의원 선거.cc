#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	int n;
	int input;
	int dasom;
	int answer = 0;
	priority_queue<int> pq;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;

	cin >> dasom;
	for (int i = 0; i < n - 1; i++) {
		cin >> input;
		pq.push(input);
	}
	if (n > 1) {
		while (pq.top() >= dasom) {
			dasom++;
			pq.push(pq.top()- 1);
			pq.pop();
			answer++;
		}
	}
	cout << answer;
	return (0);
}