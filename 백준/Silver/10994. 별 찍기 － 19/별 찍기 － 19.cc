#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int n;
	int length;
	vector<vector<char> > input;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	length = 4 * n - 3;
	input.resize(length, vector<char>(length, ' '));

	int a = 0;
	int b = length - 1;
	for (int i = 0; i < n; i++) {
		for (int j = a; j <= b; j++) {
			input[a][j] = input[j][a] = input[j][b] = input[b][j] = '*';
		}
		a += 2;
		b -= 2;
	}

	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {
			cout << input[i][j];
		}
		cout << "\n";
	}
	return (0);
}