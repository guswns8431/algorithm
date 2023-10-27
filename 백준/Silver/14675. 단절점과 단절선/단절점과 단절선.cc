#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	vector<vector<int> > v;
	int n;
	int input1, input2;
	int t,k;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	v.resize(n + 1);
	for (int i = 0; i < n - 1; i++)
	{
		cin >> input1 >> input2;
		v[input1].push_back(input2);
		v[input2].push_back(input1);
	}
	cin >> input1;
	for (int i = 0; i < input1; i++)
	{
		cin >> t >> k;
		if (t == 1)
		{
			if (v[k].size() < 2)
				cout << "no\n";
			else
				cout <<"yes\n";
		}
		else
			cout << "yes\n";
	}
	return (0);
}