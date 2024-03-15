#include <iostream>
using namespace std;

int main(void) {
	int n;
	int input;
	int answer = 0;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> input;
		answer += input;
	}
	cout << answer;

	return (0);
}