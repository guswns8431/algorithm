#include <iostream>
#include <string>
using namespace std;

int main(void) {
	int n;
	int start = 1;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	while (start <= n) {
		if (start % 2 == 1) {
			if (start == n)
				cout << "3";
			else
				cout << "1 ";
		}
		else
			cout << "2 ";
		start++;
	}
	return (0);
}