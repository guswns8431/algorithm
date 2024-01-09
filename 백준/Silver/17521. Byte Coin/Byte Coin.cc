#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	long long n, w;
	vector<long long> coin;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> w;
	for (int i = 0; i < n; i++) {
		int input;

		cin >> input;
		coin.push_back(input);
	}
	int idx = 0;
	while (idx < n - 1) {
		if (coin[idx] < coin[idx + 1])
			w += (coin[idx + 1] - coin[idx]) * (w / coin[idx]);
		idx++;
	}
	cout << w;

	return (0);
}