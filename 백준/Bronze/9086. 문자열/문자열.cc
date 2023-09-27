#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int t;
	string input;

	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> input;
		if (input.size() == 1)
			cout << input.front() << input.front() << "\n";
		else
			cout << input.front() << input.back() << "\n";
	}

	return (0);
}