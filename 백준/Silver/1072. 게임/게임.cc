#include <iostream>
using namespace std;

int main(void)
{
	long long x,y,z;
	long long start, mid, end;
	long long new_z;

	cin >> x >> y;
	z = 100 * y / x;

	start = 0;
	end = 1000000000;

	if (z >= 99)
	{
		cout << "-1";
		return (0);
	}

	while (start <= end)
	{
		mid = (start + end) / 2;
		new_z = 100 * (y + mid) / (x + mid);
		if (z < new_z)
		{
			end = mid - 1;
		}
		else
		{
			start = mid + 1;
		}
	}
	cout << start;
	return (0);
}