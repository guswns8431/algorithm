#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int n, k;
	vector<long long> cost;
	int answer = 0;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> k;
	cost.resize(n);

	cin >> cost[0];
	for (int i = 1; i < n; i++)
	{
		cin >> cost[i];
		cost[i - 1] = cost[i] - cost[i - 1];
	}
	sort(cost.begin(), cost.end());
	for (int i = 0; i < n - k; i++)
		answer += cost[i];
	cout << answer;
	return (0);
}