#include <iostream>
using namespace std;

int main(){
    int n, s;
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    while (cin>>n>>s)
        cout<< s / (n+1) << "\n";
    
    return (0);
}