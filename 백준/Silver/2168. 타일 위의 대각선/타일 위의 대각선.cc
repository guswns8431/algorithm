#include <iostream>
using namespace std;

int gcd(int x, int y) {
	if (y == 0) {
		return x;
	}
	else {
		return gcd(y, x % y);
	}
}
 
int main() {
	int m, n;
	int g;
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
	cin >> m >> n;
	g = gcd(m, n);
	cout << m + n - g;
    
    return (0);
}