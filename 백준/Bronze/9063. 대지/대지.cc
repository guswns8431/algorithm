#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
	cin >> n;

    vector<int> x;
    vector<int> y;
    
    x.resize(n);
    y.resize(n);

	for (int i = 0; i < n; i++)
		cin >> x[i] >> y[i];

	sort(x.begin(), x.end());
	sort(y.begin(), y.end());

	cout << (x[n-1] - x[0]) * (y[n-1] - y[0]) << "\n";
	return 0;
}