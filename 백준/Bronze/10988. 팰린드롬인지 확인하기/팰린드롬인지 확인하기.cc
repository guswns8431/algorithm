#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string str;
	int left, right;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> str;
	left = 0;
	right = str.size() - 1;

	while (left <= right) {
		if (str[left] != str[right]) {
			cout << "0";
			return (0);
		}
		left++;
		right--;
	}
	cout << "1";
	return (0);
}