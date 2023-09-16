#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int n;
	int v;
	vector<int> arr;
	int answer = 0;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	arr.resize(n);
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cin >> v;
	for (int i = 0; i < n; i++)
		if (arr[i] == v)
			answer++;
	cout << answer;
	return (0);
}