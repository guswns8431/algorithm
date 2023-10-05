#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int n,k;
	vector<int> p;
	int cnt = 0;
	int idx;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> k;
	p.resize(n, -1);
	cout << "<";
	idx = 1;
	for (int i = 0; cnt < n; i = (i + 1) % n, idx++)
	{
		if (p[i] == 0)
		{
			idx--;
			continue ;
		}
		if (idx == k)
		{
			idx = 0;
			p[i] = 0;
			cnt++;
			cout << i + 1;
			if (cnt == n)
				cout << ">";
			else
				cout << ", ";
		}
	}
	return (0);
}