#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void) {
	int n, m;
	vector<string> coins;
	int answer = 0;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	coins.resize(n);

	for (int i = 0; i < n; i++)
		cin >> coins[i];

	for (int i = n - 1; i >= 0; i--) {
		for (int j = m - 1; j >= 0; j--) {
			if (coins[i][j] == '1') {
				for (int row = i; row >= 0; row--) {
					for (int col = j; col >= 0; col--) {
						if (coins[row][col] == '1')
							coins[row][col] = '0';
						else
							coins[row][col] = '1';
					}
				}
				answer++;
			}
		}
	}
	cout << answer;
	return (0);
}