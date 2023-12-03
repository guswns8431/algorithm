#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void) {
	string input1;
	string input2;
	string input3;
	string input4;
	string input5;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> input1 >> input2 >> input3 >> input4 >> input5;

	for (unsigned int i = 0; i < 15; i++) {
		if (input1.size() > i)
			cout << input1[i];
		if (input2.size() > i)
			cout << input2[i];
		if (input3.size() > i)
			cout << input3[i];
		if (input4.size() > i)
			cout << input4[i];
		if (input5.size() > i)
			cout << input5[i];
	}
	return (0);
}