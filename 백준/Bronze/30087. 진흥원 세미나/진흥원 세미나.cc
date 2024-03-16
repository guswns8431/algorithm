#include <iostream>
#include <string>
using namespace std;

int main(void) {
	int n;
	string input;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> input;
		if (input == "Algorithm")
			cout << "204";
		else if (input == "DataAnalysis")
			cout << "207";
		else if (input == "ArtificialIntelligence")
			cout << "302";
		else if (input == "CyberSecurity")
			cout << "B101";
		else if (input == "Network")
			cout << "303";
		else if (input == "Startup")
			cout << "501";
		else if (input == "TestStrategy")
			cout << "105";
		cout << "\n";
	}
	return (0);
}