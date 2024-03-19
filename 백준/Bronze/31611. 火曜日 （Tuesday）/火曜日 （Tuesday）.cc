#include <iostream>
using namespace std;

int main(void) {
	int x;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> x;

	if (x % 7 == 2)
		cout << "1";
	else
		cout << "0";
	return (0);
}