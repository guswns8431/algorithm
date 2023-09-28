#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <queue>
using namespace std;

bool cmp(const pair<int, int> &p1, const pair<int, int> &p2)
{
	if (p1.first == p2.first)
		return (p1.second < p2.second);
	return (p1.first < p2.first);
}

int main(void)
{
	int n;
	vector<pair<int, int> > c;
	priority_queue<int, vector<int>, greater<>> pq;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	c.resize(n);
	for (int i = 0; i < n; i++)
		cin >> c[i].first >> c[i].second;
	sort(c.begin(), c.end(), cmp);
	pq.push(c[0].second);
	for (int i = 1; i < n; i++)
	{
		if (pq.top() <= c[i].first)
			pq.pop();
		pq.push(c[i].second);
	}
	cout << pq.size();
	return (0);
}