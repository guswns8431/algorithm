#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	int n;
	vector<int> stick;
	int totalLength = 0;
	long long answer = 0;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;

	stick.resize(n);

	for (int i = 0; i < n; i++) {
		cin >> stick[i];
		totalLength += stick[i];
	}
	sort(stick.begin(), stick.end());

	for (int i = 0; i < n - 1; i++) {
		totalLength -= stick[i];
		answer += stick[i] * totalLength;
	}

	cout << answer;
	return (0);
}