#include <iostream>
using namespace std;

int main(void) {
    int tmp;
    int sum = 0;
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    for (int i = 0; i < 6; i++) {
        cin >> tmp;
        sum += tmp;
    }
    cout << sum * 5;
    return 0;
}