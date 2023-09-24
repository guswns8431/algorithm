#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string input;
	int i;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> input;
	cin >> i;

	cout << input[i - 1];
	return (0);
}