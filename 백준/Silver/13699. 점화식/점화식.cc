#include <iostream>
using namespace std;

int main(void) {
	int n;
	long long t[36] = {0,};

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;

	t[0] = 1;

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= i; j++)
			t[i] += t[j - 1] * t[i - j];
	cout << t[n];
	return (0);
}