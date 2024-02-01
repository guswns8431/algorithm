#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	int n;
	vector<int> ho;
	int answer = 0;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	ho.resize(n);
	for (int i = 0; i < n; i++)
		cin >> ho[i];
	sort(ho.begin(), ho.end());

	if (n % 2 == 0) {
		answer = ho[n / 2] * 2;
		for (int i = n / 2 + 1; i < n; i++)
			answer += ho[i] * 2;
	}
	else {
		answer = ho[(n + 1) / 2 - 1];
		for (int i = (n + 1) / 2; i < n; i++)
			answer += ho[i] * 2;
	}
	cout << answer;
	return (0);
}