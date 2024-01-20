#include <iostream>
using namespace std;

int main(){
    int t;
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        cout << a + b << '\n';
    }
}