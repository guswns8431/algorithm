#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int n;
	int idx;
	vector<int> city;
	vector<int> distance;
	long long answer = 0;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	city.resize(n);
	distance.resize(n);

	for (int i = 0; i < n - 1; i++)
		cin >> distance[i];
	for (int i = 0; i < n; i++)
		cin >> city[i];
	for (int i = 0; i < n; i++)
	{
		idx = i;
		for (int j = i; j < n; j++)
		{
			answer += (city[idx] * distance[j]);
			if (city[idx] >= city[j + 1])
			{
				i = j;
				break ;
			}
		}
	}
	cout << answer;
	return (0);
}