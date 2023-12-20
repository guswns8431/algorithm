#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string n;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;

	int num = stoi(n) - 1;

	while (true) {
		string currentNum = to_string(++num);
		bool flag = false;
		int left = 0;
		int right = currentNum.size() - 1;

		if (left != right) {
			while (left < right) {
				if (currentNum[left] != currentNum[right]) {
					flag = true;
					break ;
				}
				left++;
				right--;
			}
		}
		if (!flag) {
			if (num == 1) {
				flag = true;
				continue ;
			}
			for (int i = 2; i <= num / 2; i++) {
				if (num % i == 0) {
					flag = true;
					break ;
				}
			}
		}
		if (!flag) {
			cout << num;
			break ;
		}
	}
	return (0);
}