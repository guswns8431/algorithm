#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int n, k;
	int total = 0;
	vector<int> bascket;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> k;

	bascket.resize(k + 1);

	for (int i = 1; i <= k; i++) {
		bascket[i] = i;
		total += i;
	}

	if (total > n)
		cout << "-1";
	else if (total == n)
		cout << bascket[k] - bascket[1];
	else {
		int idx = k;
		int moreNeed = n - total;

		while (true) {
			bascket[idx--]++;
			moreNeed--;

			if (idx == 0)
				idx = k;
			if (moreNeed == 0)
				break ;
		}
		cout << bascket[k] - bascket[1];
	}
	return (0);
}