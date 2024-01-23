#include <iostream>
using namespace std;

int main(void)
{
	int input;
	int pos_x, pos_y;
	int max = 0;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			cin >> input;
			if (input >= max)
			{
				max = input;
				pos_x = j;
				pos_y = i;
			}
		}
	}

	cout << max << "\n" << pos_y << " " << pos_x;
	return (0);
}