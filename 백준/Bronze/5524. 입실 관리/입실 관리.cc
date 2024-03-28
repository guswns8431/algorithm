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
		for (int j = 0; j < (int)input.size(); j++)
			cout << (char)tolower(input[j]);
		cout << "\n";
	}
	return (0);
}