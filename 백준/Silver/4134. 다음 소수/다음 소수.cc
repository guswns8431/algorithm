#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	int t;
	long long n;
	bool flag;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		long long num = n;
		if (num <= 1)
			cout << "2\n";
		else
		{
			while (true)
			{
				flag = false;
				for (int j = 2; j <= sqrt(num); j++)
				{
					if (num % j == 0)
					{
						flag = true;
						break ;
					}
				}
				if (!flag)
				{
					cout << num << "\n";
					break ;
				}
				num++;
			}
		}
	}
	return (0);
}