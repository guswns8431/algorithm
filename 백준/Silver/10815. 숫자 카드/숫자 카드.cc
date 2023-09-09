#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
	int n,m;
	int tmp;
	vector<int> card1;
	vector<int> card2;
	int start, mid, end;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		card1.push_back(tmp);
	}
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> tmp;
		card2.push_back(tmp);
	}
	sort(card1.begin(), card1.end());


	for (int i = 0; i < m; i++)
	{
		start = 0;
		end = card1.size() - 1;
		int result;
		while (start <= end)
		{
			mid = (start + end) / 2;
			if (card2[i] < card1[mid])
				end = mid - 1;
			else
			{
				result = card1[mid];
				start = mid + 1;
			}
		}
		if (result == card2[i])
			cout << "1 ";
		else
			cout << "0 ";
	}
	return (0);
}