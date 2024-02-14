#include <iostream>
using namespace std;

int main(void) {
	char input;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> input;

	if (input == 'N' || input == 'n')
		cout << "Naver D2";
	else
		cout << "Naver Whale";
	return (0);
}