#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int n;
	vector<int> rope;
	int answer = 0;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	rope.resize(n);

	for (int i = 0; i < n; i++)
		cin >> rope[i];
	sort(rope.begin(), rope.end());
	for (unsigned int i = 0; i < rope.size(); i++)
	{
		answer = max(answer, rope[i] *  n);
		n--;
	}

	cout << answer;
	return (0);
}