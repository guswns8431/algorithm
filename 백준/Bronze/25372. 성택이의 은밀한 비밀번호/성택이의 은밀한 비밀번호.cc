#include <iostream>
#include <string>
using namespace std;

int main(void) {
	int n;
	string input;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> input;
		if (input.length() >= 6 && input.length() <= 9)
			cout << "yes\n";
		else
			cout << "no\n";
	}

	return (0);
}