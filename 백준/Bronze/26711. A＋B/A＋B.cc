#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
	string a, b;
	string answer = "";

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> a >> b;

	int indexA = a.size() - 1;
	int indexB = b.size() - 1;
	int upFlag = 0;

	while (indexA >= 0 && indexB >= 0) {
		int numA = a[indexA] - '0';
		int numB = b[indexB] - '0';

		int tmp = numA + numB + upFlag;

		if (tmp >= 10)
			upFlag = tmp / 10;
		else
			upFlag = 0;
		answer += to_string(tmp % 10);
		indexA--;
		indexB--;
	}
	while (indexA >= 0) {
		int numA = a[indexA] - '0';
		int tmp = numA + upFlag;

		if (tmp >= 10)
			upFlag = tmp / 10;
		else
			upFlag = 0;
		answer += to_string(tmp % 10);
		indexA--;
	}
	while (indexB >= 0) {
		int numB = b[indexB] - '0';
		int tmp = numB + upFlag;

		if (tmp >= 10)
			upFlag = tmp / 10;
		else
			upFlag = 0;
		answer += to_string(tmp % 10);
		indexB--;
	}
	if (upFlag > 0)
		answer += to_string(upFlag);
	reverse(answer.begin(), answer.end());
	cout << answer;
	return (0);
}