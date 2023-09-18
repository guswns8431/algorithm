#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int n,m;
	int i,j;
	int tmp;
	vector<int> v;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	v.resize(n + 1);
	for (int idx = 1; idx <= n; idx++)
		v[idx] = idx;
	for (int idx = 0; idx < m; idx++)
	{
		cin >> i >> j;
		tmp = v[i];
		v[i] = v[j];
		v[j] = tmp;
	}

	for (int idx = 1; idx <= n; idx++)
		cout << v[idx] << " ";
	return (0);
}