#include<iostream>
using namespace std;

int main(){
    int a, b, c, d;
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> a >> b >> c >> d;
    cout << 56 * a + 24 * b + 14 * c + 6 * d;
}