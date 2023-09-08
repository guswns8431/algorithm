#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <utility>
using namespace std;

bool cmp(pair<string, int>& p1, pair<string, int>& p2)
{
	if (p1.second == p2.second)
		return p1.first < p2.first;
	return p1.second < p2.second;
}

int main(void)
{
	map<string, int> m;
	string input;
	int n;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		m[input] = input.size();
	}

	vector<pair<string, int> > words(m.begin(), m.end());
	sort(words.begin(), words.end(), cmp);
	for (unsigned int i = 0; i < words.size(); i++)
		cout << words[i].first << "\n";
	return (0);
}