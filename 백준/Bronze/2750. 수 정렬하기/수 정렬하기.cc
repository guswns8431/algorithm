#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int n;
	vector<int> arr;
	int input;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		arr.push_back(input);
	}
	sort(arr.begin(), arr.end());
	for (int i = 0 ; i < n; i++)
		cout << arr[i] << "\n";
	return (0);
}