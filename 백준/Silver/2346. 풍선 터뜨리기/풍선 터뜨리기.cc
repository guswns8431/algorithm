#include <iostream>
#include <deque>
#include <utility>
using namespace std;

int main(void)
{
	int n;
	int input;
	int cur;
	//종이에 적힌 번호, 풍선 번호
	deque<pair<int, int> > ballon;

	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> input;
		ballon.push_back({input, i});
	}
	while (!ballon.empty())
	{
		cur = ballon.front().first;
		cout << ballon.front().second << " ";
		ballon.pop_front();
		if (cur > 0)
		{
			for (int i = 0; i < cur - 1; i++)
			{
				ballon.push_back(ballon.front());
				ballon.pop_front();
			}
		}
		else
		{
			for (int i = 0; i > cur; i--)
			{
				ballon.push_front(ballon.back());
				ballon.pop_back();
			}
		}
	}
	return (0);
}