#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string name;
	int age;
	int weight;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	while (true) {
		cin >> name >> age >> weight;

		if (name == "#" && age == 0 && weight == 0)
			break ;
		if (age <= 17 && weight <= 79)
			cout << name << " Junior\n";
		else
			cout << name << " Senior\n";
	}
	return (0);
}