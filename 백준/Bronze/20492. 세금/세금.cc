#include <iostream>
using namespace std;

int main() {
    int n;
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin >> n;
    cout << (int)(n*0.78) << " " << (int)(n*0.8 + n*0.2*0.78);
    return 0;
}