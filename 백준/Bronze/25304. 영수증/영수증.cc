#include <iostream>
using namespace std;

int main(void)
{
	int price;
	int n;
	int a, b;
	int total = 0;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> price >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		total += (a * b);
	}

	if (price == total)
		cout << "Yes";
	else
		cout << "No";
	return (0);
}