#include <iostream>
using namespace std;

int main(void) {
	int r, s;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> r >> s;

	cout << (r * 8 + s * 3) - 28;
	return (0);
}