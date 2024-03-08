#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string a, b;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> a >> b;

	cout << a + b;
	return (0);
}