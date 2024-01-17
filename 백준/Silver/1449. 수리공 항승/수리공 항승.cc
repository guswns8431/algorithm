#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	int n, l;
	int answer = 1;
	vector<int> leaks;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> l;

	leaks.resize(n);
	for (int i = 0; i < n; i++)
		cin >> leaks[i];

	sort(leaks.begin(), leaks.end());

	int remainTape = l - 1;

	for (int i = 0; i < n - 1; i++) {
		if (leaks[i + 1] - leaks[i] <= remainTape)
			remainTape -= leaks[i + 1] - leaks[i];
		else {
			answer++;
			remainTape = l - 1;
		}
	}

	cout << answer;
	return (0);
}