#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int n;
	vector<int> food;
	long long answer = 0;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	food.resize(n);

	for (int i = 0; i < n; i++)
		cin >> food[i];
	sort(food.begin(), food.end(), greater<>());
	for (unsigned int i = 0; i < food.size(); i++)
	{
		if ((i + 1) % 3 == 0)
			continue ;
		answer += food[i];
	}
	cout << answer;
	return (0);
}