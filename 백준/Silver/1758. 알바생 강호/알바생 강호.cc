#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int n;
	vector<int> tip;
	long long answer = 0;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	tip.resize(n);

	for (int i = 0; i < n; i++)
		cin >> tip[i];
	sort(tip.begin(), tip.end());
	if (tip[0] <= n)
		sort(tip.begin(), tip.end(), greater<>());
	for (unsigned int i = 0; i < tip.size(); i++)
	{
		if ((long long)tip[i] - i <= 0)
			break ;
		answer += tip[i] - i;
	}
	cout << answer;
	return (0);
}