#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int n;
	float answer = 0;
	vector<float> drink;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	drink.resize(n);

	for (int i = 0; i < n; i++)
		cin >> drink[i];
	sort(drink.begin(), drink.end());
	answer = drink.back();
	for (int i = 0; i < n - 1; i++)
		answer += drink[i] / 2;
	cout << answer;
	return (0);
}