#include <iostream>
using namespace std;

int main(void)
{
	int n;
	int num, pos;
	int cow[11];
	int answer = 0;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	fill(begin(cow), end(cow), -1);
	for (int i = 0; i < n; i++)
	{
		cin >> num >> pos;
		if ((cow[num] == 0 && pos == 1) || (cow[num] == 1 && pos == 0))
			answer++;
		cow[num] = pos;
	}
	cout << answer;
	return (0);
}