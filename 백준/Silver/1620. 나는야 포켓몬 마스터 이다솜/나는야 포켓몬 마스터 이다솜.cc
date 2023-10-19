#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cctype>
using namespace std;

int main(void)
{
	int n,m;
	vector<string> name;
	map<string, int> name_map;
	string input;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;

	name.resize(n);
	for (int i = 0; i < n; i++)
	{
		cin >> name[i];
		name_map[name[i]] = i + 1;
	}
	for (int i = 0; i < m; i++)
	{
		cin >> input;
		if (isalpha(input[0]))
		{
			cout << name_map[input] << "\n";
		}
		else
		{
			cout << name[stoi(input) - 1] << "\n";
		}
	}
	return (0);
}