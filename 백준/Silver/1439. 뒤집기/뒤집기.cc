#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
	string input;
	int countOne = 0;
	int countTwo = 0;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> input;

	unsigned int inputIndex = 0;
	char current = input[0];

	while (++inputIndex < input.size()) {
		if (input[inputIndex] != current) {
			if (current == '1')
				countOne++;
			else
				countTwo++;
			current = input[inputIndex];
		}
	}
	cout << max(countOne, countTwo);
	return (0);
}