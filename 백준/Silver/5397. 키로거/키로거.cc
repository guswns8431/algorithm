#include <iostream>
#include <stack>
#include <deque>
#include <string>
using namespace std;

int main(void) {
	int n;
	string input;
	deque<char> answer;
	stack<char> tmp;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> input;

		for (unsigned int j = 0; j < input.size(); j++) {
			if (input[j] == '<') {
				if (!answer.empty()) {
					tmp.push(answer.back());
					answer.pop_back();
				}
			}
			else if (input[j] == '>') {
				if (!tmp.empty()) {
					answer.push_back(tmp.top());
					tmp.pop();
				}
			}
			else if (input[j] == '-') {
				if (!answer.empty())
					answer.pop_back();
			}
			else
				answer.push_back(input[j]);
		}
		while (!tmp.empty()) {
			answer.push_back(tmp.top());
			tmp.pop();
		}
		while (!answer.empty()) {
			cout << answer.front();
			answer.pop_front();
		}
		cout << "\n";
	}
	return (0);
}