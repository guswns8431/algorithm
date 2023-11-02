#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
	int n,k;
	int p;
	queue<int> q;
	int answer;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> k;

	for (int i = 2; i <= n; i++)
		q.push(i);
	while (k > 0)
	{
		p = q.front();
		answer = p;
		q.pop();
		k--;
		int i = 0;
		int q_size = q.size();
		while (k > 0 && q_size > i)
		{
			i++;
			if (q.front() % p == 0)
			{
				k--;
				answer = q.front();
				q.pop();
			}
			else
			{
				q.push(q.front());
				q.pop();
			}
		}
	}
	cout << answer;
	return (0);
}