#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

int main(void)
{
	int n;
	vector<double> a;
	int x;
	double answer_count = 0;
	double answer_sum = 0;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	a.resize(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cin >> x;

	for (int i = 0; i < n; i++)
	{
		int max = a[i];
		int min = x;
		if (x > a[i])
		{
			max = x;
			min = a[i];
		}
		if (gcd(max, min) == 1)
		{
			answer_count++;
			answer_sum += a[i];
		}
	}
	cout << answer_sum / answer_count;
	return (0);
}