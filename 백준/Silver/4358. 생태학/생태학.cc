#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(void)
{
	string input;
	map<string, double> m;
	int count = 0;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	while (getline(cin, input))
	{
		count++;
		m[input]++;
	}
	cout << fixed;
	cout.precision(4);
	for (auto it = m.begin(); it != m.end(); it++)
		cout << it->first << " " << it->second * 100 / count << "\n";
	return (0);
}