#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
	int n;
	priority_queue<int> pq;
	int input;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (input == 0)
		{
			if (pq.empty())
				cout << "0\n";
			else
			{
				cout << pq.top() << "\n";
				pq.pop();
			}
		}
		else
		{
			pq.push(input);
		}
	}
	return (0);
}