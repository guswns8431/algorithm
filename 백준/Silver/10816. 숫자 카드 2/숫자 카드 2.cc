#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int n,m;
	int tmp;
	vector<int> n_arr;
	vector<int> m_arr;

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
	cin >> n;
	n_arr.resize(n);
	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		n_arr[i] = tmp;
	}
	cin >> m;
	m_arr.resize(m);
	sort(n_arr.begin(), n_arr.end());
	for (int i = 0; i < m; i++)
	{
		cin >> tmp;
		cout << upper_bound(n_arr.begin(), n_arr.end(), tmp) - lower_bound(n_arr.begin(), n_arr.end(), tmp) << " ";
	}
	return (0);
}