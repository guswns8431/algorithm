#include <iostream>
using namespace std;

int main()
{
    int n,m;
    unsigned int result;
    
    cin >> n >> m;
    
    if(n > m)
    {
        result = n - m;
    }
    else
    {
        result = m - n;
    }
    
    cout << result << endl;
    
    return 0;
    
}
