#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main(void) {
	int t;
	int n;
	string input1, input2;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> t;
	for (int i = 0; i < t; i++) {
	unordered_map<string, int> clothes;
		cin >> n;

		for (int j = 0; j < n; j++) {
			cin >> input1 >> input2;

			if (clothes[input2])
				clothes[input2]++;
			else
				clothes[input2] = 1;
		}

		int tmp = 1;
		for (auto it = clothes.begin(); it != clothes.end(); it++)
			tmp *= it->second + 1;

		cout << tmp - 1 << "\n";
	}
	return (0);
}