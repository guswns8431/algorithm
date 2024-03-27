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
	cin.ignore();
	for (int i = 1; i <= n; i++) {
		getline(cin, input);
		cin.clear();
		cout << i << ". " << input << "\n";
	}
	return (0);
}