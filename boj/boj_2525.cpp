#include <iostream>
using namespace std;

int main()
{
    int h,m,input;
    int m2h;
    
    cin >> h >> m;
    
    cin >> input;
    
    m2h = (input + m) / 60;
    input = (input + m) % 60;
    
    cout << (h+m2h) % 24 << " " << input;
    
    return 0;
}
