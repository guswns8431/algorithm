#include <iostream>
using namespace std;

int main(void) {
    int h, m;
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin >> h >> m;
    
    cout << (h - 9) * 60 + m;
    return (0);
}