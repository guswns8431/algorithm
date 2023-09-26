#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void)
{
	string input;
	int max_cnt = 0, min_cnt = 0;
	string max, min;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> input;

	for (unsigned int i = 0; i < input.size(); i++)
	{
		if (input[i] == 'M')
		{
			max_cnt++;
			min_cnt++;
		}
		else
		{
			max += "5";
			for (int j = 0; j < max_cnt; j++)
				max += "0";
			max_cnt = 0;
			if (min_cnt > 0)
			{
				min += "1";
				for (int j = 0; j < min_cnt - 1; j++)
					min += "0";
			}
			min += "5";
			min_cnt = 0;
		}
	}
	if (max_cnt != 0 || min_cnt != 0)
	{
		for (int j = 0; j < max_cnt; j++)
			max += "1";
		min += "1";
		for (int j = 0; j < min_cnt - 1; j++)
			min += "0";
	}
	cout << max << "\n" << min;

	return (0);
}