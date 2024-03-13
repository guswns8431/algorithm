#include <iostream>
#include <string>
using namespace std;

int main(void) {
	int n;
	string input;
	bool flag = false;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	input = to_string(n);

	for (int i = 0; i < (int)input.size(); i++) {
		if (input[i] == '7') {
			flag = true;
			break ;
		}
	}
	if (flag) {
		if (n % 7 == 0)
			cout << "3";
		else
			cout << "2";
	}
	else {
		if (n % 7 == 0)
			cout << "1";
		else
			cout << "0";
	}
	return (0);
}