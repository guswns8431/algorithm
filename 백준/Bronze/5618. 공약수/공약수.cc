#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int n;
	vector<int> v;
	int max = 0;
	bool flag = false;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	v.resize(n);

	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
		if (v[i] > max)
			max = v[i];
	}
	for (int i = 1; i <= max; i++)
	{
		for (unsigned int j = 0; j < v.size(); j++)
		{
			if (v[j] % i != 0)
			{
				flag = true;
				break ;
			}
		}
		if (!flag)
			cout << i << "\n";
		flag = false;
	}
	return (0);
}