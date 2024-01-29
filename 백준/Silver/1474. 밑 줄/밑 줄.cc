#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(void) {
	int n, m;
	string words[10];
	int length = 0;
	int neededUnderbar;
	string underbarPerWord = "";
	int remainUnderbar;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> words[i];
		length += words[i].size();
	}

	neededUnderbar = m - length;
	for (int i = 0; i < neededUnderbar / (n - 1); i++)
		underbarPerWord += "_";
	remainUnderbar = neededUnderbar % (n - 1);

	for (int i = 0; i < n - 1; i++) {
		words[i] += underbarPerWord;
		if (remainUnderbar > 0 && islower(words[i + 1][0])) {
			words[i] += "_";
			remainUnderbar--;
		}
	}
	if (remainUnderbar > 0) {
		for (int i = n - 2; i >= 0; i--) {
			if (isupper(words[i + 1][0])) {
				words[i] += "_";
				remainUnderbar--;
			}
			if (remainUnderbar == 0)
				break ;
		}
	}
	for (int i = 0; i < n; i++)
		cout << words[i];
	return (0);
}