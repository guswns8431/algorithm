#include <iostream>
using namespace std;
typedef long long ll;

ll N, ans;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	while (N % 5) N -= 3, ans++;

	if (N < 0) cout << -1;
	else cout << ans + N / 5;
}