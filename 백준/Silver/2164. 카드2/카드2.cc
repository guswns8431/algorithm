#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
	int n;
	queue<int> q;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++)
		q.push(i + 1);
	while (q.size() > 1)
	{
		q.pop();
		q.push(q.front());
		q.pop();
	}
	cout << q.front();
	return (0);
}