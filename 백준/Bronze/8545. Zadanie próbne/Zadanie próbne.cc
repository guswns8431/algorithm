#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin >> s;
    
    for(int i = s.size() - 1; i >= 0; i--)
        cout << s[i];
}