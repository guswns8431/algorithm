#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int n, m;
	vector<vector<int>> a;
	vector<vector<int>> b;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	a.resize(n, vector<int>(m));
	b.resize(n, vector<int>(m));

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> b[i][j];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << a[i][j] + b[i][j] << " ";
		cout << "\n";
	}
	return (0);
}