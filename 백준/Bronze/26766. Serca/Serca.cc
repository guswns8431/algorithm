#include <iostream>
using namespace std;

void printPaint(void) {
	cout << " @@@   @@@\n";
	cout << "@   @ @   @\n";
	cout << "@    @    @\n";
	cout << "@         @\n";
	cout << " @       @\n";
	cout << "  @     @ \n";
	cout << "   @   @  \n";
	cout << "    @ @   \n";
	cout << "     @    \n";
}

int main(void) {
	int n;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;

	for (int i = 0; i < n; i++)
		printPaint();
	return (0);
}