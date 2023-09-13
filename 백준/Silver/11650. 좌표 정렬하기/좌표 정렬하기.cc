#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int> &p1, pair<int, int> &p2)
{
	if (p1.first == p2.first)
		return (p1.second < p2.second);
	return (p1.first < p2.first);
}

int main(void)
{
	int n;
	vector<pair<int, int>> point;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	point.resize(n);
	for (int i = 0; i < n; i++)
		cin >> point[i].first >> point[i].second;

	sort(point.begin(), point.end(), cmp);
	for (int i = 0; i < n; i++)
		cout << point[i].first << " " << point[i].second << "\n";
	return (0);
}