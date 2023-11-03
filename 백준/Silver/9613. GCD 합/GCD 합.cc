#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

int main(void)
{
	int t;
	int n;
	vector<int> v;
	long long answer;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		v.resize(n);
		answer = 0;
		for (int j = 0; j < n; j++)
			cin >> v[j];
		sort(v.begin(), v.end(), greater<>());
		for (int j = 0; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				answer += gcd(v[j], v[k]);
			}
		}
		cout << answer << "\n";
	}
	return (0);
}