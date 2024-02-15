#include <iostream>
using namespace std;

int main(void) {
	int input;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	for (int i = 0; i < 8; i++) {
		cin >> input;
		if (input != 0 && input != 1) {
			cout << "F";
			return (0);
		}
	}
	cout << "S";
	return (0);
}