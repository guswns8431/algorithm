#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int n;
	int b, c;
	vector<int> room;
	long long answer;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	room.resize(n);
	for (int i = 0; i < n; i++)
		cin >> room[i];
	cin >> b >> c;
	for (int i = 0; i < n; i++)
		room[i] -= b;
	answer = n;
	for (int i = 0; i < n; i++)
	{
		if (room[i] <= 0)
			continue ;
		if (room[i] % c != 0)
			answer += room[i] / c + 1;
		else
			answer += room[i] / c;
	}
	cout << answer;
	return (0);
}