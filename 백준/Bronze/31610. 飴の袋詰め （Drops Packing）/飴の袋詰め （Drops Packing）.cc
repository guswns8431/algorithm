#include <iostream>
using namespace std;

int main(void) {
	int a, b, c;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> a >> b >> c;

	cout << a * b + c;
	return (0);
}