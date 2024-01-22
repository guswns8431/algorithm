#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
using namespace std;

bool cmp(const pair<int, int> &x, const pair<int, int> &y) {
	return (x.second < y.second);
}

int main(void) {
	int n;
	int midX;
	int midY;
	long long answer = 0;
	vector<pair<int, int> > position;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	position.resize(n);

	for (int i = 0; i < n; i++)
		cin >> position[i].first >> position[i].second;
	sort(position.begin(), position.end());
	midX = position[n / 2].first;
	sort(position.begin(), position.end(), cmp);
	midY = position[n / 2].second;

	for (int i = 0; i < n; i++)
		answer += abs(position[i].first - midX) + abs(position[i].second - midY);
	cout << answer;
	return (0);
}