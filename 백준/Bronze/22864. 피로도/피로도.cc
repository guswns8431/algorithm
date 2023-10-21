#include <iostream>
using namespace std;

int main(void)
{
	int a,b,c,m;
	int time = 24;
	int answer = 0;
	int limit = 0;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> a >> b >> c >> m;

	while (time--)
	{
		if (limit <= m - a)
		{
			limit += a;
			answer += b;
		}
		else
		{
			limit -= c;
			if (limit < 0)
				limit = 0;
		}
	}
	cout << answer;
	return (0);
}