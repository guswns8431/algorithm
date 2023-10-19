#include <iostream>
#include <unordered_set>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
	int n, m;
	unordered_set<string> s;
	string input;
	int answer = 0;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		s.insert(input);
	}
	for (int i = 0; i < m; i++)
	{
		cin >> input;
		if (s.find(input) != s.end())
			answer++;
	}
	cout << answer;
	return (0);
}