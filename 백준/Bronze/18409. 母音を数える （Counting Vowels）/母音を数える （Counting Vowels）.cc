#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string input;
	int n;


	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	cin >> input;

	for (int i = 0; i < (int)input.length(); i++)
		if (input[i] != 'a' && input[i] != 'i' && input[i] != 'u' && input[i] != 'e' && input[i] != 'o')
			n--;
	cout << n;
	return (0);
}