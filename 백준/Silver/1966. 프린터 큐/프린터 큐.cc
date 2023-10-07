#include <iostream>
#include <queue>
#include <algorithm>
#include <utility>
using namespace std;

int main(void)
{
	int t, n, m;
	priority_queue<int, vector<int> > priority;
	queue<pair<int, int> > q;
	int tmp;
	int answer = 0;
	int cnt;

	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n >> m;
		answer = 0;
		cnt = 0;
		for (int j = 0; j < n; j++)
		{
			cin >> tmp;
			priority.push(tmp);
			q.push({tmp, j});
		}
		while (!priority.empty())
		{
			if (priority.top() == q.front().first)
			{
				cnt++;
				priority.pop();
				if (q.front().second == m)
					answer = cnt;
			}
			else
				q.push(q.front());
			q.pop();
		}
		cout << answer << "\n";
	}
	return (0);
}