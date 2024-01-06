#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	int t;
	int j, n;
	int r, c;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> t;

	for (int test_case = 0; test_case < t; test_case++) {
		vector<int> box;
		cin >> j >> n;
		for (int i = 0; i < n; i++) {
			cin >> r >> c;
			box.push_back(r * c);
		}
		sort(box.begin(), box.end(), greater<>());
		int total = 0;
		int idx = 0;
		while (total < j) {
			total += box[idx];
			idx++;
		}
		cout << idx << "\n";
	}
	return (0);
}