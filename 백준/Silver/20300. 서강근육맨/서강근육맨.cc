#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int n;
	long long answer = 0;
	vector<long long> machine;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	machine.resize(n);

	for (int i = 0; i < n; i++)
		cin >> machine[i];
	sort(machine.begin(), machine.end());
	if (n % 2 == 1)
	{
		answer = machine.back();
		for (int i = 0; i < n / 2; i++)
			answer = max(answer, machine[i] + machine[n - 2 - i]);
	}
	else
	{
		answer = machine[0] + machine.back();
		for (int i = 1; i < n / 2; i++)
			answer = max(answer, machine[i] + machine[n - 1 - i]);
	}
	cout << answer;
	return (0);
}