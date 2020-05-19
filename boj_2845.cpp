#include <iostream>
using namespace std;

int main()
{
    int l,p;
    int n1,n2,n3,n4,n5;
    
    cin >> l >> p;
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    
    cout << n1 - ( l * p ) << " " << n2 - ( l * p ) << " " << n3 - ( l * p ) << " " << n4 - ( l * p ) << " " << n5 - ( l * p ) << endl;
    
    return 0;
}
