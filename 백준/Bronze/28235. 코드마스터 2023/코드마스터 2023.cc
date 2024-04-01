#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(void) {
	map<string, string> m;
	string input;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	m["SONGDO"] = "HIGHSCHOOL";
	m["CODE"] = "MASTER";
	m["2023"] = "0611";
	m["ALGORITHM"] = "CONTEST";

	cin >> input;
	cout << m[input];
	return (0);
}