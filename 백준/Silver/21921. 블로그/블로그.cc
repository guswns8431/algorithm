#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int n, x;
	int count = 1;
	int max_value = 0;
	vector<long long> input;
    int tmp;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> x;

	input.resize(n);
	for (int i = 0; i < n; i++)
		cin >> input[i];
	for (int i = 0; i < x; i++)
		max_value += input[i];
    tmp = max_value;
	for (int i = 0; i <= n - x - 1; i++)
	{
		tmp = tmp - input[i] + input[i + x];
		if (tmp > max_value)
		{
			count = 1;
			max_value = tmp;
		}
		else if (tmp == max_value)
			count++;
	}
	if (max_value == 0)
		cout << "SAD";
	else
		cout << max_value << "\n" << count;
	return (0);
}