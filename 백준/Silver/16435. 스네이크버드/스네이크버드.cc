#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	int n, l;
	int input;
	vector<int> fruits;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> l;

	for (int i = 0; i < n; i++) {
		cin >> input;
		fruits.push_back(input);
	}
	sort(fruits.begin(), fruits.end());

	for (int i = 0; i < n; i++) {
		if (fruits[i] > l)
			break ;
		l++;
	}
	cout << l << "\n";
	return (0);
}