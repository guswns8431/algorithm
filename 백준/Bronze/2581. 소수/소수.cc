#include <iostream>
using namespace std;

int main(void)
{
	int m,n;
	int min = 10001;
	int sum = 0;
	int count = 0;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> m >> n;
	for (int i = m; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
			if (i % j == 0)
				count++;
		if (count == 2)
		{
			sum += i;
			if (min > i)
				min = i;
		}
		count = 0;
	}
	if (min == 10001)
		cout << "-1";
	else
		cout << sum << "\n" << min;
	return (0);
}