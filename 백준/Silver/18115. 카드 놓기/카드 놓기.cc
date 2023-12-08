#include <iostream>
#include <deque>
using namespace std;

int main(void) {
	int n;
	deque<int> answer;
	deque<int> inputDQ;
	int input;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> input;
		inputDQ.push_back(input);
	}

	for (int i = 0; i < n; i++) {
		int current = inputDQ.back();
		inputDQ.pop_back();

		if (current == 1)
			answer.push_back(i + 1);
		else if (current == 2) {
			int tmp = answer.back();
			answer.pop_back();
			answer.push_back(i + 1);
			answer.push_back(tmp);
		}
		else
			answer.push_front(i + 1);
	}

	while (!answer.empty()) {
		cout << answer.back() << " ";
		answer.pop_back();
	}

	return (0);
}