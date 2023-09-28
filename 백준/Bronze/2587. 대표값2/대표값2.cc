#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int v[5];
	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> v[i];
		sum += v[i];
	}
	sort(begin(v), end(v));
	cout << sum / 5 << "\n" << v[2];
	return (0);
}