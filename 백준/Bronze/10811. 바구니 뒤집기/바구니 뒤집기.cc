#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int n,m;
	int i,j,l;
	vector<int> v;
	vector<int> tmp;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	v.resize(n + 1);
	for (int idx = 1; idx <= n; idx++)
		v[idx] = idx;
	tmp = v;
	for (int idx = 0; idx < m; idx++)
	{
		cin >> i >> j;
		l = i;
		for (int k = j; k >= i; k--)
		{
			tmp[l] = v[k];
			l++;
		}
		v = tmp;
	}

	for (int idx = 1; idx <= n; idx++)
		cout << v[idx] << " ";
	return (0);
}