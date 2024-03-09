#include <iostream>
using namespace std;

int main(void) {
	int k, m;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> m >> k;

	if (m % k == 0)
		cout << "Yes";
	else
		cout << "No";
	return (0);
}