#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main(void)
{
	int n;
	vector<int> input;
	vector<int> copy;
	unordered_map<int, int> sorted;
	int count = 0;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	input.resize(n);
	copy.resize(n);
	for (int i = 0; i < n; i++)
	{
		cin >> input[i];
		copy[i] = input[i];
	}
	sort(copy.begin(), copy.end());
	for (int i = 0; i < n; i++)
	{
		if (sorted.find(copy[i]) != sorted.end())
			continue ;
		sorted[copy[i]] = count++;
	}
	for (int i = 0; i < n; i++)
	{
		cout << sorted[input[i]] << " ";
	}
	return (0);
}