#include <iostream>
using namespace std;

int main(void) {
	int n;
	long long lt, wt, le, we;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> lt >> wt >> le >> we;

		if (lt * wt < le * we)
			cout << "Eurecom\n";
		else if (lt * wt == le * we)
			cout << "Tie\n";
		else
			cout << "TelecomParisTech\n";
	}
	return (0);
}