#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
	int n,k;
	vector<int> sensor;
	vector<int> dist;
	int answer = 0;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> k;
	sensor.resize(n);
	dist.resize(n - 1);
	for (int i = 0; i < n; i++)
		cin >> sensor[i];
	sort(sensor.begin(), sensor.end());
	for(int i = 0; i < n - 1; i++)
		dist[i] = sensor[i + 1] - sensor[i];
	sort(dist.begin(), dist.end());
	for (int i = 0; i < n - k; i++)
		answer += dist[i];
	cout << answer;
	return (0);
}