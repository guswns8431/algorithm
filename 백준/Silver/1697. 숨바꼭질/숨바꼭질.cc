#include <iostream>
#include <queue>
#include <vector>
#include <utility>
using namespace std;

int graph[100001];
int k;

int main(void)
{
	int n;
	queue<pair<int, int>> q;
	int cur;
	int answer = 0;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> k;

	q.push({n, 0});
	while(!q.empty())
	{
		cur = q.front().first;
		answer = q.front().second;
		q.pop();
        if (cur == k)
        {
            cout << answer;
            break ;
        }
		if (cur - 1 >= 0 && graph[cur - 1] == 0)
		{
			graph[cur - 1] = 1;
			q.push({cur - 1, answer + 1});
		}
		if (cur + 1 <= 100000 && graph[cur + 1] == 0)
		{
			graph[cur + 1] = 1;
			q.push({cur + 1, answer + 1});
		}
		if (2 * cur <= 100000 && graph[2 * cur] == 0)
		{
			graph[2 * cur] = 1;
			q.push({2 * cur, answer + 1});
		}
	}
	return (0);
}