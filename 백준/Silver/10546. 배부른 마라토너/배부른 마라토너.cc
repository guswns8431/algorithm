#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(void)
{
	int n;
	string input;
	multiset<string> s;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		s.insert(input);
	}
	for (int i = 0; i < n - 1; i++)
	{
		cin >> input;
		s.erase(s.find(input));
	}
	cout << *s.begin();
	return (0);
}