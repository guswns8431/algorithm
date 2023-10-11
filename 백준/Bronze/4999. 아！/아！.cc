#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string j;
	string d;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> j;
	cin >> d;

	if (j.size() < d.size())
		cout << "no";
	else
		cout << "go";

	return (0);
}