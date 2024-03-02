#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string input;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> input;

	if (input == "NLCS")
		cout << "North London Collegiate School";
	else if (input == "BHA")
		cout << "Branksome Hall Asia";
	else if (input == "SJA")
		cout << "St. Johnsbury Academy";
	else
		cout << "Korea International School";
	return (0);
}