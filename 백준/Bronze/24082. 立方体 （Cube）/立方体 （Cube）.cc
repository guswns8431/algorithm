#include <iostream>
using namespace std;

int main(void) {
	int x;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> x;

	cout << x * x * x;
	return (0);
}