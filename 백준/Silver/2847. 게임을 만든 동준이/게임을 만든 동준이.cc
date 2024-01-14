#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	int n;
	vector<int> level;
	int answer = 0;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;

	level.resize(n);

	for (int i = 0; i < n; i++)
		cin >> level[i];

	int i = 0;
	int flagCount = 0;
	while (true) {
		if (level[i] >= level[i + 1]) {
			level[i]--;
			answer++;
			flagCount = 0;
		}
		else
			flagCount++;
		if (flagCount == n)
			break ;
		i++;
		if (i == n - 1)
			i = 0;
	}
	cout << answer;
	return (0);
}