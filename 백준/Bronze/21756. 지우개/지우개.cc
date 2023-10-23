#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
	queue<int> q;
	int n;
	int cnt = 0;
	int limit;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	for (int i = 1; i <= n; i++)
		q.push(i);
	limit = q.size();
	while(q.size() > 1)
	{
		cnt++;
		if (cnt > limit)
		{
			cnt = 1;
			limit = q.size();
		}
		if (cnt % 2 != 1)
			q.push(q.front());
		q.pop();
	}
	cout << q.front();
	return (0);
}