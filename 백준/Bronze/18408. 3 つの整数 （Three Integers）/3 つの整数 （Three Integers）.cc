#include <iostream>
#include <map>
using namespace std;

int main(void) {
	int a, b, c;
	map<int, int> m;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> a >> b >> c;
	m[a]++;
	m[b]++;
	m[c]++;

	if(m[1] > m[2])
		cout << "1";
	else
		cout << "2";
	return (0);
}