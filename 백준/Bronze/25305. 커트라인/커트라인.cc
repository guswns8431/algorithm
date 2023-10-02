#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
	int n,k;
	vector<int> grade;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> k;
	grade.resize(n);
	for (int i = 0; i < n; i++)
		cin >> grade[i];
	sort(grade.begin(), grade.end(), greater<>());
	cout << grade[k - 1];
	return (0);
}