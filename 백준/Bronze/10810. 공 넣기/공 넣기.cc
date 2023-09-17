#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int n,m;
	int i,j,k;
	vector<int> v;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	v.resize(n + 1);
	for (int idx = 0; idx < m; idx++)
	{
		cin >> i >> j >> k;
		for (int l = i; l <= j; l++)
			v[l] = k;
	}

	for (int idx = 1; idx <= n; idx++)
		cout << v[idx] << " ";
	return (0);
}