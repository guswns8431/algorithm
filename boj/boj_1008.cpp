#include <iostream>
using namespace std;

int main()
{
    double a,b;
    double result;
    
    cin >> a >> b;
    
    cout.precision(10); //오차조절을 위해 필요했음
    result = a/b;
    cout << result << endl;
    
    return 0;
}
