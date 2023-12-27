#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(void) {
	int n;
	bool flag = false;
	string input;
	map<char, int> answer;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input;

		answer[input[0]]++;
	}

	for (auto it = answer.begin(); it != answer.end(); it++) {
		if (it->second >= 5) {
			cout << it->first;
			flag = true;
		}
	}
	if (!flag)
		cout << "PREDAJA";
	return (0);
}