#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string n;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;

	if (n[0] == n[1])
		cout << "1";
	else
		cout << "0";
	return (0);
}