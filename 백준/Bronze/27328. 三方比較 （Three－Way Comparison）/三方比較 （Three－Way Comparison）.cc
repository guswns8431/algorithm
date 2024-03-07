#include <iostream>
using namespace std;

int main(void) {
	int a, b;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> a >> b;

	if (a > b)
		cout << "1";
	else if (a == b)
		cout << "0";
	else
		cout << "-1";
	return (0);
}