#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	int n;
	long long answer = 0;
	int input;
	vector<long long> tree;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;

	tree.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> input;
		answer += input;
	}
	for (int i = 0; i < n; i++)
		cin >> tree[i];

	sort(tree.begin(), tree.end());
	for (int i = 0; i < n; i++)
		answer += tree[i] * i;
	cout << answer;
	return (0);
}