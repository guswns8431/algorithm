#include <iostream>
#include <vector>
#include <algorithm>
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
	vector<pair<int, int> > time;
	priority_queue<int, vector<int>, greater<> > pq;
	int answer = 1;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	time.resize(n);
	for (int i = 0; i < n; i++)
		cin >> time[i].first >> time[i].second;
	sort(time.begin(), time.end(), cmp);

	pq.push(time[0].second);
	for (int i = 1; i < n; i++)
	{
		if (pq.top() <= time[i].first)
			pq.pop();
		else
			answer++;
		pq.push(time[i].second);
	}
	cout << answer;
	return (0);
}