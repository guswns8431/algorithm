#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string input = "";

	while (true) {
		getline(cin, input);

		if (input == "END")
			break ;

		for (int i = (int)input.size() - 1; i >= 0; i--)
			cout << input[i];
		cout << "\n";
	}
	return (0);
}