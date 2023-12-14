#include <iostream>
using namespace std;

int main(void) {
	int t;
	int n, m;
	int a, b;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n >> m;

		for (int j = 0; j < m; j++)
			cin >> a >> b;

		cout << n - 1 << "\n";
	}
	return (0);
}