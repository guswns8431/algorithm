#include <iostream>
#include <deque>
using namespace std;

int main(void) {
	int n, m;
	deque<int> dq;
	int input;
	int left, right;
	int answer = 0;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;

	for (int i = 1; i <= n; i++)
		dq.push_back(i);

	for (int i = 0; i < m; i++) {
		cin >> input;

		for (unsigned int j = 0; j < dq.size(); j++) {
			if (input == dq[j]) {
				left = j;
				right = dq.size() - j;
				break ;
			}
		}

		if (left <= right) {
			while (true) {
				if (dq.front() == input)
					break ;
				dq.push_back(dq.front());
				dq.pop_front();
				answer++;
			}
			dq.pop_front();
		}
		else {
			answer++;
			while (true) {
				if (dq.back() == input)
					break ;
				dq.push_front(dq.back());
				dq.pop_back();
				answer++;
			}
			dq.pop_back();
		}
	}
	cout << answer;
	return (0);
}