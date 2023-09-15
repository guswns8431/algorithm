#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int t;
	int n;
	int tmp;
	int max_val, min_val;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> t;
	for (int i = 0; i < t; i++)
	{
        max_val = -1000000;
        min_val = 1000000;
		cin >> n;
		for (int j = 0; j < n; j++)
		{
			cin >> tmp;
			max_val = max(max_val, tmp);
			min_val = min(min_val, tmp);
		}
		cout << min_val << " " << max_val << "\n";
	}
	return (0);
}