#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
	int t;
	int n;
	string input;
	string target;
	int answer = 0;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> t;
	for (int testCase = 0; testCase < t; testCase++) {
		cin >> n;
		cin >> input >> target;

		int whiteToBlack = 0;
		int blackToWhite = 0;
		for (int i = 0; i < n; i++) {
			if (input[i] == 'W' && input[i] != target[i])
				whiteToBlack++;
			else if (input[i] == 'B' && input[i] != target[i])
				blackToWhite++;
		}
		answer = max(whiteToBlack, blackToWhite);
		cout << answer << "\n";
	}
	return (0);
}